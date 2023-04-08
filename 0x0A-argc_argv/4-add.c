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
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (*argv[i][j] < 48 || *argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
