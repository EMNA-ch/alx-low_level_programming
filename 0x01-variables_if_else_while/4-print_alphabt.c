#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase.
 * Return: 0(Success)
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
