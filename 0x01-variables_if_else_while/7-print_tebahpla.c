#include <stdio.h>
/**
 * main - a program that reverse the output
 * Return: (0)
 */

int main(void)
{
	char letter = 'a'

	for (int i = 0; i <= 'z'; i--;)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
