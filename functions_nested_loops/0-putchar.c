#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
