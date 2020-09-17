#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  long long long_tp;
  float float_tp;
  long long_ttp;
  char char_tp;
  int int_tp;

  printf("Size of a char: %lu byte(s)\n", sizeof(char_tp));
  printf("Size of an int: %lu byte(s)\n", sizeof(int_tp));
  printf("Size of a long int: %lu byte(s)\n", sizeof(long_ttp));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(long_tp));
  printf("Size of a float: %lu byte(s)\n", sizeof(float_tp));

  return (0);
}
