#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to check
 *
 * Return: The length of the string as an integer
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
