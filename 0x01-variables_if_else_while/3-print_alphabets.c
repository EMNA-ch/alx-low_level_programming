#include <stdio.h>

/**
 * main - a C program that prints the alphabet in uppercase.
 *
 * Return: 0(Success)
 */
int main(void)
{
char alphabet = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
