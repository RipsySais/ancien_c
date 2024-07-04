#include "main.h"
/**
 * _atoi - une fonction qui convertit une chaîne en entier
 * @s: function that convert a string
 * Return: 0 or sign * result
 */
int _atoi(char *s)
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
		if (s[i] == '+')
		{

		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result == 214748364 && s[i] - '0' > 7)
			{
				result = -214748364;
				return (result);
			}
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
