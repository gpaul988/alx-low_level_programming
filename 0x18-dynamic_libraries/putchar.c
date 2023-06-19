#include <unistd.h>

/**
 * _putchar - Creates the character c to stdout
 * @c: Character to Pull
 *
 * Return: Success 1.
 * Error, -1 is reversed,  errno is set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
