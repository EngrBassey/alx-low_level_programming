#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: first integer
 * @s2: second integer
 * Return: return 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		else
			return (0);
	}

	return (0);
}
