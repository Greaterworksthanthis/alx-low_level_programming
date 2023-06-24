#include "main.h"
/**
 *_isdigit - check if input is diget between 0 and 9
 *@c: The character to be checked
 *
 *Return: 1 if @c is digit and between 0 and 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
