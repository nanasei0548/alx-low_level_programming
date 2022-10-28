#include "nana.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int x = 10;

	if (x > 0 && x < 11)
	{
		_putchar("%d\n", x);
		n *= -1;
	}
}
