#include "shell.h"

/**
 * interactive - if shell is interactive mode returns true
 * @in: input
 *
 * Return: 1 if interactive mode, if else 0
 */
int interactive(info_t *in)
{
	return (isatty(STDIN_FILENO) && in->readfd <= 2);
}

/**
 * is_delim - checks the character
 * @j: input
 * @d: input
 * Return: 0 if False, 1 if True
 */
int is_delim(char j, char *d)
{
	while (*d)
		if (*d++ == j)
			return (1);
	return (0);
}

/**
 * _isalpha - checks the alphabetic character
 * @k: input
 * Return: 1 if c is alphabetic,if else 0
 */

int _isalpha(int k)
{
	if ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * func_1 - converts a string to an integer
 * @t: input
 * Return: 0 if no numbers in string, converted number otherwise
 */

int func_1(char *t)
{
	int i, st = 1, f = 0, o;
	unsigned int r = 0;

	for (i = 0; t[i] != '\0' && f != 2; i++)
	{
		if (t[i] == '-')
			st *= -1;

		if (t[i] >= '0' && t[i] <= '9')
		{
			f = 1;
			r *= 10;
			r += (t[i] - '0');
		}
		else if (f == 1)
			f = 2;
	}

	if (st == -1)
		o = -r;
	else
		o = r;

	return (o);
}

