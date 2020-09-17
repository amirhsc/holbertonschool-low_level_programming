nclude <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	while (abc <= 'z')
		putchar(abc++);

	while (ABC <= 'Z')
		putchar(ABC++);

	putchar('\n');
	return (0);
}
