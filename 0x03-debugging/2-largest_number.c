#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: largest
* @x: integer one
* @y: integer two
* @z: integer three
*/

int largest_number(int x, int y, int z)
{
	int largest

	if (x > y)
	{
		if (y > z)
			largest = x;
															else if (x > z)
			largest = x;
		else 
			largest = z;
	}
	else;
	{
		if (y < z)
			largest = z;
		else
			largest = y;
	}
	return: largest
}
