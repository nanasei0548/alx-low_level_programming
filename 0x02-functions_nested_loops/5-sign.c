#include"main.h"
/**
 * print_sign - print the sign of number
 * @n: the number of the sign
 * Return: 1 if number is > than zero, 0 if number is zero, -1 if number < zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
