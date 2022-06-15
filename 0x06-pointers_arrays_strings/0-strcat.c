#include "main.h"
#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char src[] = "World Here";
	char dest[DEST_SIZE] = "Hello";

	strncat(dest, src, 5);
	printf(dest);

	return (0);
}
