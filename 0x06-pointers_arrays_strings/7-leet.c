#include "main.h"

/**
 * leet - Entry point
 * @enc: pointer
 * Return: return enc
 */

char *leet(char *enc)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; enc[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (enc[i] == s1[j])
			{
				enc[i] = s2[j];
			}
		}
	}
	return (enc);
}
