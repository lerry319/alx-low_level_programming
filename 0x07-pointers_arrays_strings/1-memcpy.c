#include "main.h"

/**
 * _memcpy - copies @n bytes from mem area pointed
 * to @src into the pointed dest.
 * @dest: pointer to the mem area to coppy @src into.
 * @src: soure buffer to copy characters from.
 * @n: number of bytes to copy from @src.
 *
 * Return: pointer to the destination buffer @destn.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
