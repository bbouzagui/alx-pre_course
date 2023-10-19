#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 * Return: Pointer to the first occurrence of 'c' in 's' or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}

	return (NULL);
}
