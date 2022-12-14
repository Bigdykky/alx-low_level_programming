#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search from
 * @c: char to locate
 * Return: first occurence or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
