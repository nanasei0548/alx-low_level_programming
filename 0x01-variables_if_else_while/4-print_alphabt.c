#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
	for (low = 'á'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
