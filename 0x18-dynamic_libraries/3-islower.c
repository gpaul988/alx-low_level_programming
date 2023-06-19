#include "main.h"

/**
 * _islower - Examin if char is lowercase
 * @c: Character to be examined
 *
 * Return: 1 if char is lowercase, O/W 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
