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
	int b = va_arg(lst, unsigned int);
	int total = 2;
	int nb;
	int p = 0;

	for (nb = b; nb; nb = nb / 2)
		p++;

	while (p && total * 2 < b)
	{
		total *= 2;
		p--;
	}

	nb = b;


	while (total)
	{
		if (nb - total >= 0)
		{
			_putchar('1');
			nb -= total;
		}

		else
			_putchar('0');

		total /= 2;
	}
	return (0);
}
