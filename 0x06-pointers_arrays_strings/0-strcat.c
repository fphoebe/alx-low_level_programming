#include "main.h"
/**
 * _strcat - concatenates two strings together,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int s = 0, s2 = 0;

	while (*(dest + s) != '\0')
	{
		s++;
	}

	while (s2 >= 0)
	{
		*(dest + s) = *(src + s2);
		if (*(src + s2) == '\0')
			break;
		s++;
		s2++;
	}
	return (dest);
}
