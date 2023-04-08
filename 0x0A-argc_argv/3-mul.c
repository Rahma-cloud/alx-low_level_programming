#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function
 * @argc: param
 * @argv: param
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
