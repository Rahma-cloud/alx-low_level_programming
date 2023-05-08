#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - a function
 * @file: parmeter
 * Return: 0
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - closes file descriptors
 * @fd: param
 */

void close_file(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a function
 * @argc: param
 * @argv: param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fro, to, r, w;
	char *be;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	be = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	r = read(fro, be, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(be);
			exit(98);
		}
		w = write(to, be, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(be);
			exit(99);
		}
		r = read(fro, be, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(be);
	close_file(fro);
	close_file(to);

	return (0);
}
