#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char *c = "abcdefghijklmnopqrstuvwxyz";
	char *t = c;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (*c)
			_putchar(*(c++));

		_putchar('\n');
		c = t;
	}
}
