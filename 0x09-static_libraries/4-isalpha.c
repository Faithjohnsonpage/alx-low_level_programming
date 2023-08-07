#include "main.h"

/**
 * _isalpha - checks if alphabet
 * @c: character checked
 * Return: int
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
