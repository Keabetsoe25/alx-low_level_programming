#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Get the last digit of a random number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int id;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	id = n % 10;

	if (id > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, id);
	}
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, id);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, id);
	}
	return (0);
}
