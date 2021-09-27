#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate strings
 *@dest: destination
 *@src: source string
 *@n: int parameter
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;
	/* store length of dest in the length variable*/
	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	/* concatenate src to dest*/
	for (j = 0; j < n && src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	/* terminate the dest string */
	dest[length] = '\0';
	return (dest);
}
