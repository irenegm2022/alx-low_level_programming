#include <stdio.h>

/**
 * main - prints base ten digits without char
 *
 * main - prints all single digit numbers of base 10 starting from 0,
 *followed by a new line, using putchar
 * Return: zero
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
		putchar(i);
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
