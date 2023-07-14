#include <stdio.h>

/**
 * main - a C program that prints the alphabet in lowercase then in uppercase.
 *
 * Return: 0(Success)
 */
int main(void)
{
char alphabet1 = 'a';
char alphabet2 = 'A';
while (alphabet1 <= 'z')
{
putchar(alphabet1);
alphabet1++;
while (alphabet2 <= 'Z')
{
putchar(alphabet2);
alphabet2++;
}
putchar('\n');
return (0);
}
