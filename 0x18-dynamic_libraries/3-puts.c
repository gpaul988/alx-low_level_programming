#include "main.h"

/**
 * _puts - Pulls string, accompanied by fresh line, to stdout
 * @str: String to pull
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
