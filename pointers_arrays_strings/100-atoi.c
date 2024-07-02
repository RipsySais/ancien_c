#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi - une fonction qui convertit une chaîne en entier
 * @s: function that convert a string
 * return: 0
 */
_atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int rom = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{

		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			rom = 1;

			result = result * 10 + (s[i] - '0');
		}
		else if (rom == 1)
		{
			break;
		}
		i++;
	}
	if (!rom)
	{
		return (0);
	}

	return (sign * result);
}
