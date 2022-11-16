#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: a pointer to the memory area to copy @src into.
 * @src: the source buffer to copy characters from.
 * @n: number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; n > 0; i++, n--)
		dest[i] = src[i];

	return (dest);
}
