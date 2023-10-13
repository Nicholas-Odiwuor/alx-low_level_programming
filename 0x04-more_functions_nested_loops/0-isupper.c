#include "main.h"

/**
 * _isupper - -uppercase  letters
 * @q : char check
 *
 * Return: 0 or 1
 */

int _isupper(int q)
{
	if (q <= 'Z' && q >= 'A')
		return (1);
	else
		return (0);
}
