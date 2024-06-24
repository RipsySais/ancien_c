#include "main.h"
#include <ctype.h>

/**
 * _isupper - Verification des caractères majuscule
 * Return: 1 si c est en majuscule, 0 si autre
 * @c: ça c'est le caractère a vérifier
 */

int _isupper(int c)
{
		if ((c >= 'A') && (c <= 'Z'))
			return (1);
		else
			return (0);
}
