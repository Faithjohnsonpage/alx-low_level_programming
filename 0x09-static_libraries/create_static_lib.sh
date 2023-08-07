#!/bin/bash
* Create the object files
	gcc -c -Wall -Werror -Wextra *.c
* Generate the static library
	ar -rc liball.a *.o
* Indexing
	randlib liball.a
* To list object files
	ar -t liball.a

	nm liball.a
