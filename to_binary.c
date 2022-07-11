#include "main.h"

/**
* to_binary - Takes in an integer number in base 10 and
* and converts it to a binary
* @lst: va_list is an argument from _printf
*
* Return: the converted int into a binary
*/

int to_binary(va_list lst)
{
	long unsigned int b = va_arg(lst, long unsigned int);
	unsigned int total = 2;
	unsigned int nb;
	unsigned int p = 0, q = 0;

	if (b == 0)
	{
		_putchar('0');
		return (1);
	}

	for (nb = b; nb; nb = nb / 2)
		p++;

	q = p;
	while (p && total < b)
	{
		total *= 2;
		p--;
	}

	if (total > b)
	{
		total /= 2;
	}

	nb = b;

	while (total)
	{
		if (nb - total)
		{
			_putchar('1');
			nb -= total;
		}

		else
			_putchar('0');

		total /= 2;
	}
	return (q);
}
