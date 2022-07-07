#include "main.h"

/**
 * main - function that prints alphabet,
 * in lowercase, followed by a newe line
 */
void print_alphabet(void)
{
  char c;
  for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
  _putchar('\n');
}
