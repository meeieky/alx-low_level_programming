#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Reads a text file and prints it to the POSIX standard output.
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: -r actual number of bytes read and printed
 * filename is NULL return 0
 * write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	r = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (r);
}
