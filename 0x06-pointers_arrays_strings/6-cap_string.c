#include "main.h"

/**
 * cap_string - Entry point
 * @chr: pointer
 * Return: return chr
 */

char *cap_string(char *chr)
{
	int i = 0;

	while (chr[i])
	{
		while (!(chr[i] >= 'a' && chr[i] <= 'z'))
			i++;

		if (chr[i - 1] == ' ' ||
		chr[i - 1] == '\t' ||
		chr[i - 1] == '\n' ||
		chr[i - 1] == ',' ||
		chr[i - 1] == ';' ||
		chr[i - 1] == '.' ||
		chr[i - 1] == '!' ||
		chr[i - 1] == '?' ||
		chr[i - 1] == '"' ||
		chr[i - 1] == '(' ||
		chr[i - 1] == ')' ||
		chr[i - 1] == '{' ||
		chr[i - 1] == '}' ||
		i == 0)
			chr[i] -= 32;

	i++;
	}

	return (chr);
}
