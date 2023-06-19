#include "main.h"

/**
* _strspn - Tasks that picks the length of prefix substring
* @s: String
* @accept: String
*
* Return: Number of bytes in the previous segment of s
* that contains only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int k = 0;
int g;

while (*s)
{
for (g = 0; accept[g]; g++)
{
if (*s == accept[g])
{
k++;
break;
}
else if (accept[g + 1] == '\0')
return (k);
}
s++;
}
return (k);
}
