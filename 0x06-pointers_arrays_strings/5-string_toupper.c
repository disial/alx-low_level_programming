#include "main.h"

/**
 * string_toupper - to upper function
 * @ch: str array
 * Return: characters
 */
char *string_toupper(char *ch)
{
	int j = 0;

	for (; ch[j] != '\0'; j++)
		if (ch[j] > 96 && ch[j] < 123)
			ch[j] -= 32;
	return (ch);
}
