#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return: 0(Success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float sum_t;

	while (1)
	{
		sum = fib1 + fibe2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			sum_t += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", sum_t)
	return (0);
}
