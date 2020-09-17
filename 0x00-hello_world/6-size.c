#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  long long t_llong;
  float t_float;
  long t_long;
  char t_char;
  int t_int;

  printf("Size of a char: %lu byte(s)\n", sizeof(t_char));
  printf("Size of an int: %lu byte(s)\n", sizeof(t_int));
  printf("Size of a long int: %lu byte(s)\n", sizeof(t_long));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(t_llong));
  printf("Size of a float: %lu byte(s)\n", sizeof(t_float));

  return (0);
}
