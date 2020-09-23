#include "holberton.h"

/**
* print_alphabet - First Prorotype/Function
*/

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int letter;

for (letter = 97; letter < 123; ++letter)
{
_putchar(letter);
}
_putchar(10);
}
_putchar('\n');
}
