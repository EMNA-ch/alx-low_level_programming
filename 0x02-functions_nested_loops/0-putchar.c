#include "main.h"
#include <unistd.h>
/**
 * _putchar - a program that writes a character c to stdout.
 * @c: the character to write
 *
 * Return: on success 1.
 *         on erro -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
