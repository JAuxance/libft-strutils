#include "ft_strutils.h"
/**
 * ft_strdup - Duplicates a string by allocating memory for the new string.
 * @src: The source string to duplicate.
 * Return: A pointer to the duplicated string, or NULL.
 */

char *ft_strdup(const char *src)
{
	char *dest;
	size_t i = 0;

	if (src == NULL)
		return (NULL);
	dest = malloc(strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
