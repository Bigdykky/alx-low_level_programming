#include "main.h"
/**
 * _string - checks lenght of string
 * @s: String to reverse
 * Return: result
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
