#include "main.h"

/**
 * *_memcpy - Task that mimics memory area
 * @dest: Area memory is saved
 * @src: Area memory is mimiced from
 * @n: Number of bytes
 *
 * Return: Mimiced memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
