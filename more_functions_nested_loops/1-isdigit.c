#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function qui vérifie si un carectère est un chiffre ou non
 * @c : caractère doit etre testé
 * Return: retoune 1 s'il est en majuscule sinon 0
 */
int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
