#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file_func(const char *file_from, const char *file_to);
int create_files(const char *file_to);
void close_fd(int fd, const char *file_name);

#endif /* MAIN_H */
