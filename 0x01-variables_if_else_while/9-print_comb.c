#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program
 * Return: (0)
 */

int main(void)
{
	int i, j;
	
	for (i = 0; i < 9; i++)
	{
        for (j = i+1; j <= 9; j++)
	{
            putchar(i + '0');
            putchar(', ');
            putchar(j + '0');
            if (i != 8 || j != 9) {
                putchar(', ');
            }
        }
    }
    putchar('\n');
    return 0;
}

