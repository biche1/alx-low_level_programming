#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[15] = "Good";
	char s2[20] = "Morning\n";
	char *p;

	printf("%s\n", s1);
	printf("%s\n", s2);
	p = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
