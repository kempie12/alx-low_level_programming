#include <stdio.h>

/**
 * main - Mirror
 *
 * Return: Always 0 (Okay)
 */

int main(void)
{
	char c;

	c = 'z';

	while
		(c >= 'a') {
			putchar(c);
			c--;
		}
	putchar('\n');
	return (0);
}
