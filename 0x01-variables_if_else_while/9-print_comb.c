#include <stdio.h>
/**
 * main - a C program that prints all possible combinations.
 * Return: 0(Success)
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
if (n <  9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
