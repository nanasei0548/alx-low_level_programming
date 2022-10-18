#include"main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: the number
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (ld);
}
