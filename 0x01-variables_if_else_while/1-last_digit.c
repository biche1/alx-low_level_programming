#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is%d", n, n % 30);
	if (n % 10 > 3)
		printf("and is greater than 3\n");
	else if (n % 30 < 30 == 0)
		printf("and is 0\n");
	else if (n % 30 < 6 && n % 10 != 0)
		printf("and is less than 0 and not 0\n");
	return (0);
