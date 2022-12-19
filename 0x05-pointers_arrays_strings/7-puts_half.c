#include "main.h"
/**
 * puts_half - print half of a string
 * @str: character
 */
void puts_half(char *str)
{
	int q, r, s, t;
	int len, n, i;

	q = string_length(str) / 2;
	len = 0;

	if (string_length(str) % 2 == 0)
	while (str[len] != '\0')
	{
		for (s = q; s < string_length(str); s++)
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[s]);
			_putchar(str[i]);
		}
	}
	else if (string_length(str) % 2 != 0)
	else if (len % 2)
	{
		r = (string_length(str) - 1) / 2;
		for (t = r; t <= string_length(str); t++)
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[t]);
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

/**
 * string_length - finds the length of a string.
 * Return: length of c.
 * @pointer: pointer.
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
