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
	char *buffer;
	int fd;
	ssize_t u;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fd, buf, letters);
	u = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(fd);
	return (s);
}
