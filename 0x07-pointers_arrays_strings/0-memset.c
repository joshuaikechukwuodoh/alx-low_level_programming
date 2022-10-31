#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 *location to fill
 *char to fill location with
 *number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;

while (n--)
{
*s = b;
s++;
}
return (start);
}
