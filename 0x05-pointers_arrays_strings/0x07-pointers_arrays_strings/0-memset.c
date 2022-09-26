#include "main.h"

/**
 * memset - fills the first n bytes of the memory
 * area pointed to @s with the constant byte @c.
 * @s: pointer to memory to be filled.
 * @c: character to fill memomry area
 * @n: number of bytes to be filled.
 *
 * Retun: pointer to be filled
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
