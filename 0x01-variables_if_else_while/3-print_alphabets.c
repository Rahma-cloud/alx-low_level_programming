#include <stdio.h>
/** 
* main - a program that prints both lowercase and uppercase letters
* Return: (0)
*/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
int i = 0;
while (i <= 26)
{
putchar(lowercase);
lowercase++;
i++;
}
while (i == 0)
{
putchar(uppercase);
uppercase++;
i++;
}
putchar('\n');
return (0);
}
