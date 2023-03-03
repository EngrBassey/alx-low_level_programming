#include "main.h"

/**
 * rot - Entry point
 * @enc: pointer
 * Return: return enc
 */

char *rot13(char *enc)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; enc[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (enc[i] == s1[j])
			{
				enc[i] = s2[j];
				break;
			}
		}
	}

	return (enc);
}
