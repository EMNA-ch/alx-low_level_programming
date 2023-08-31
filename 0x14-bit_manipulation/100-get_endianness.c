#include "main.h"

/**
 * get_endianess - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num;

	n = 1;
	if (*(char)&num == 1)
		return (1);
	else
		return (0);
}

