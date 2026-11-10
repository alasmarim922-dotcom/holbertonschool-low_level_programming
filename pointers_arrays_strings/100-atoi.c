#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: The converted integer, or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* Do nothing, sign is handled or remains positive */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	if (sign < 0)
	{
		return (-((int)result));
	}

	return ((int)result);
}
