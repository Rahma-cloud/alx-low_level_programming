#include <stdio.h>

/**
 * main - a function
 * @argc: param
 * @argv: param
 * Return: o
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
