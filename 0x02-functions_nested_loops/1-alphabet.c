#include "main.h"
/**
 * main - a program that prints alphabet
 * print_alphabet - prints out the alphabet
 * Return: (0).
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}

_putchar('\n');
}

