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
	unsigned int i, count, Num, binary;
	unsigned int arr[32];

	i = 0;
	count = 0;
	Num = va_arg(lst, int);
	binary = 0;

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}

	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
	}

		i = count - 1;

		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}

		_putchar('0' + arr[i]);

	return (count);
}
