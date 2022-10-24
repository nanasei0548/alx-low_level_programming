#include "nana.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int all = 0, u = 0;

	while (str[all] != '\0')
		all++;

	all -= 1;

	for (; u <= all; u += 2)
		_putchar(str[u]);

	_putchar('\n');
}
