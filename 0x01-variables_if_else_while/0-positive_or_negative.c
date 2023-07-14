#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a C program that prints whether the int is positive or negative
 * Return: 0(Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is a positive number \n", n);
else if (n < 0)
printf("%d is a negative number \n", n);
else
printf("0 is neither positive nor negative");
return (0);
}
