#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char src[] = "World Here";
	char dest[DEST_SIZE] = "Hello";

	strncat(dest, src, 3);
	char *d;

	d = dest;
	_putchar(d);
}
