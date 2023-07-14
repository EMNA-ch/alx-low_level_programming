#include <stdio.h>
/**
 * main - a C program that prints all the numbers of base 16 in lowercase.
 * Return: 0(Success)
 */
int main(void)
{
int n = 0;
char alphabet = 'a';
while (n < 10)
{
putchar((n % 10) + '0');
n++;
}
while (alphabet <= 'f')
{
putchar(letter);
alphabet++;
}
putchar('\n');
return (0);
}
