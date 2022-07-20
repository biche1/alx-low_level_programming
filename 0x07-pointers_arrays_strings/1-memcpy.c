#include "main.h"
/**
 * _memcpy: copies n bytes from memory area
 * *dest: memory area where bytes are copied to
 * *src: memory area where bytes previously located
 * @n: buffer length
 * return : returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src +1);
		i++
	}
	return (dest);
}
