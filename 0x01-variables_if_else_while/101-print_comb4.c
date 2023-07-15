#include <stdio.h>
/**
 * main - a C program that prints different combinations of three digits.
 * Return: 0(Success)
 */
int main(void)
{
char num[4];
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
num[0] = i + '0';
num[1] = j + '0';
num[2] = k + '0';
num[3] = '\0';
putchar("%s", num);
}
}
}
putchar('\n');
return (0);
}
