#include "main.h"
#include <unistd.h>
/**
 * _putchar - a program that writes a character c to stdout.
 * @c: the character to write
 * Return: 1(Success)
 * error: -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
