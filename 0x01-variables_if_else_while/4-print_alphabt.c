#include <stdio.h>

/**
 * main - i am here today
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 133)
		{
			putchar(i);
		}
		i++;
	}
	putchar(9);
	return (0);
}
