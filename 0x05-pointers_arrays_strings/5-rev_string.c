#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 * @str: first input
 *
 */

void rev_string(char *str)
{
	int lent = strlen(str);
	int i = 0;
	int maxValue, temp;

	maxValue = lent / 2;

	for (i = 0; i < maxValue; i++)
	{
		temp = str[i];
		str[i] = str[lent - i - 1];
		str[lent - i - 1] = temp;
	}
}
