#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two stings
 *
 * @src: string to be added
 * @dest: sting to be incresed
 * @n: number of bytes of scr to be added to the dest
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest_ptr);
}
