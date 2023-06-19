#include "main.h"

/**
 * _strncat - Integrate two strings using 
 * at most n bytes from src
 * @dest: Input worth
 * @src: Input Worth
 * @n: Input worth
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int g;

	k = 0;
	while (dest[k] != '\0')
		k++;

	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[k] = src[g];
		k++;
		g++;
	}
	dest[k] = '\0';
	return (dest);
}
