#include "main.h"

/**
 * print_alphabet - print alphabets lowercase
 *
 * Return: Always 0 (Okay)
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = "a"; alphabet <= "z"; alphabet++)
{
_putchar(alphabet);
}

_putchar("\n");
}

