#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
