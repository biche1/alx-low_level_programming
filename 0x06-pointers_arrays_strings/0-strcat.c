#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char destination[] = "Good ";
	char source[] = "Morning!";

	strcat(destination, source);
	printf("Concatenated String: %s\n", destination);
	return (0);
}
