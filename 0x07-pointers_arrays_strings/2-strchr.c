#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: Pointer to the first occurence of the character in the string s
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Delaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0); /*values null*/
