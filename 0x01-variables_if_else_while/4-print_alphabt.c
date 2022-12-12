#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * followed by a new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e')

			putchar(ch);


	}
	putchar('\n');

	return (0);
