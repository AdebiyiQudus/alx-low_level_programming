#include "main.h"
/**
 * print_rev - prints string to reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count; i++)
		_putchar(s[count - i - 1]);
	_putchar('\n');
}
