#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *hex = "0123456789abcdef";

while (*hex)
putchar(*(hex++));

putchar('\n');
return (0);
}
