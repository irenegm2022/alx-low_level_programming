#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *followed by a new line, using putchar
 * Return: zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');
	
	putchar('\n');
	
	return (0);
}
