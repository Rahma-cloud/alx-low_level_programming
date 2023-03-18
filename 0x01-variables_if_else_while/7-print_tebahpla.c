#include <stdio.h>
/**
 * main - a program that reverse the output
 * Return: (0)
 */

int main(void)
{
	char letter = 'z';

	for (int i = 0; i < 26; i++;)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
