#include "main.h"

/**
 * _memcpy - a function that copys memory area
 *memory area destination to copy
 *memory area source to copy from
 *number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;

while (n--)
{
*dest = *src;
src++;
dest++;
}
return (start);
}
