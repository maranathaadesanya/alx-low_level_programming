#include "main.h"

/**
 *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (l = i, j = 0; needle[j] != '\0'; j++, l++)
		{
		if (needle[j] != haystack[l] || haystack[l] == '\0')
		{
		break;
		}
		}
		if (needle[j] == '\0')
		{
		return (haystack + i);
		}
	}
	return (0);
}
