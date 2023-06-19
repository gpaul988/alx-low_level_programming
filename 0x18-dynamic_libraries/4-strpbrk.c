#include "main.h"

/**
 * _strpbrk – Task that explores a string for any of a set of bytes
 * @s: Origin string
 * @accept: String to be explored
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
