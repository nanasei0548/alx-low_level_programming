#include "main.h"
/**
 * times_table - print the 9 x table
 */
void times_table(void)
{
	int N, M, P;

	for (N = 0; N < 10; N++)
	{
		_putchar('0');
		for (M = 1; M < 10; M++)
		{
			_putchar(',');
			_putchar(' ');
			P = N * M;

			if (P < 10)
				_putchar(' ');
			else
				_putchar((P / 10) + '0');
			_putchar((P % 10) + '0');
		}
		_putchar ('\n');
	}
}
