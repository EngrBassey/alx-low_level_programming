#include "main.h"

/**
  * checklen - funtion to check the length of a string
  * @s: string char
  * Return: return checklen
  */

int checklen(char *s)
{
	if (*s != 0)
	{
		return (1 + checklen(s + 1));
	}
	else
		return (0);
}

/**
  * strncomp - function to compare the first and the last string
  * @s: sting char
  * @i: first string
  * @j: lst string
  * Return: return 1
  */
int strncomp(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
			return (strncomp(s, i + 1, j - 1));
	}
	return (0);
}

/**
  * is_palindrome - funtion to check paildrome
  * @s: string char
  * Return: return 1
  */
int is_palindrome(char *s)
{
	return (strncomp(s, 0, checklen(s) - 1));
}
