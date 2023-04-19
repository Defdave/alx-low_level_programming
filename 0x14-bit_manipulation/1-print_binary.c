#include "main.h"

/**
 * print_binary - prints binary rep of number
 * @n: number to be printed in binary
 *
 * Return: Returns zero
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i > 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar ('i');
			count++;
		}
		else if (count)
			_putchar ('0');
	}
	if (!count)
		_putchar('0');
}
