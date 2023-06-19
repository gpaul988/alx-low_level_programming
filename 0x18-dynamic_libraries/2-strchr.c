#include "main.h"

/**
 * _strchr - Task that addresses a character in a string.
 * @s: String
 * @c: Character to be explored
 *
 * Return: Directs to the initial occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
