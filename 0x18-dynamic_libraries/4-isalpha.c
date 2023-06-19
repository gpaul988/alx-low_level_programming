#include "main.h"

/**
 * _isalpha - Looks for alphabetic character
 * @c: Character to be explored
 *
 * Return: 1 if c is letter, O/W 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
