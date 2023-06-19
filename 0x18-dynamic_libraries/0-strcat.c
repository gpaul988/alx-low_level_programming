#include "main.h"

/**
 * _strcat - Integrate two strings
 * @dest: Input worth
 * @src: Input worth
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int g;

	k = 0;
	while (dest[k] != '\0')
		k++;

	g = 0;
	while (src[g] != '\0')
	{
		dest[k] = src[g];
		k++;
		g++;
	}
	dest[k] = '\0';
	return (dest);
}
