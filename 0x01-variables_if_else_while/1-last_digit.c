#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *    * main - Checks last digit
 *       *
 *          *Return: zero
 */
int main(void)
{
	int n;
	int d;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	} else if (d == 0)
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	} else if (d < 6 && d != 0)
		printf("0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and mot 0\n", n, d);
		printf("less than 6 and not 0\n");
	}
	return (0);
}
