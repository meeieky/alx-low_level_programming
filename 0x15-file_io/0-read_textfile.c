#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints the POSIX standard output.
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * @filename: if null retun is 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf
		ssize_t fd;
	ssize_t w;
	ssize_t t;

	FILE filename = popen(filename, "O_RDONLY");
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = fread( buf, sizeof(char), letters, fd);
	w = fwrite(stdout, sizeof(char), buf, ssize_t t);

	free(buf);
	pclose(ssize_t fd);
	return (w);
}
