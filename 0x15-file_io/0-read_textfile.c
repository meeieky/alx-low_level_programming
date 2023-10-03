#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints
 * @filename: Text file
 * @letters: letters
 * Return: actual number of letters it could read and print
 * filename is NULL return 0
 * write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t n;
	ssize_t u;
	ssize_t s;

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(n, buf, letters);
	u = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(s);
	return (u);
}
