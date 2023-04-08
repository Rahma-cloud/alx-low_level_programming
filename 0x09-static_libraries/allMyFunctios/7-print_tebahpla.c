#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that reverse the output
 * Return: (0)
 */

int main(void)
{
	char letter = 'z';
	int i = 0;

	while (i < 26)
	{
		putchar(letter);
		letter--;
		i++;
	}
	putchar('\n');
	return (0);
}
