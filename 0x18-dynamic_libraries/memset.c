#include "main.h"

/**
* _memset - Charge memory with a continuous byte
* @s: Begin location of memory to be Charged
* @b: Continuous byte for Charging
* @n: Number of bytes to be changed
*
* Return: New string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
