#include "main.h"

/**
 * read_textfile - a function
 * @filename: Parameter
 * @letters: parameter
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ray;
	ssize_t fd;
	ssize_t bw;
	ssize_t br;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	ray = malloc(sizeof(char) * letters);
	br = read(fd, ray, letters);
	bw = write(STDOUT_FILENO, ray, br);

	free(ray);
	close(fd);
	return (bw);
}
