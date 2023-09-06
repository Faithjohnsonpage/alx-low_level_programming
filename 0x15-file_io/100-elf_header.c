#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

void print_elf_header_info(Elf64_Ehdr *header) {
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1) printf(" ");
	}
	printf("\n");

	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS]) {
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
	}

	printf("Data:                              ");
	switch (header->e_ident[EI_DATA]) {
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<unknown>\n");
	}

	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) ABI\n");
			break;
		default:
			printf("<unknown>\n");
	}

	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core dump file)\n");
			break;
		default:
			printf("<unknown>\n");
	}

	printf("Entry point address:                %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		perror("open");
		return 98;
	}

	Elf64_Ehdr header;
	ssize_t n = read(fd, &header, sizeof(header));
	if (n == -1) {
		perror("read");
		close(fd);
		return 98;
	}

	if (n != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return 98;
	}

	print_elf_header_info(&header);

	close(fd);
	return 0;
}
