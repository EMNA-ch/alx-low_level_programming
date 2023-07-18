#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase using _putchar
 */
void print_alphabet_x10(void)
{
int l;
char ch;
for (l = 0; l < 10; l++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
}
