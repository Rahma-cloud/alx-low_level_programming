#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - a program that prints the last digit of a variable
 * Return: (0)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	scanf("%d", &n);
	printf("Last digit of int, n");
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	else if (n == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
