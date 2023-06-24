#include "main.h"

/*
 *Write a function that checks for uppercase character.
 *@c: The character to be checked
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

