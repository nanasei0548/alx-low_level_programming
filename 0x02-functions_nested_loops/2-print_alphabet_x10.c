#include"main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	char y, x;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
