#include "main.h"

/**
 * cap_string - capilize str function
 * @ch: str
 * Return: ch capitalized
 */
char *cap_string(char *ch)
{
	int i = 0;
	int j = 0;
	int h = 0;
	char k[] = ",;.!?(){}\n\t\"";

	for (; ch[i] != '\0'; i++)
	{
		if (ch[0] > 96 && ch[0] < 123)
			j = 1;
		for (; k[h] != '\0'; h++)
			if (k[h] == ch[i])
				j = 1;
		if (j)
		{
			if (ch[i] > 96 && ch[i] < 123)
			{
				ch[i] -=32;
				j = 0;
			}
			else if (ch[i] > 64 && ch[i] < 91)
				j = 0;
			else if (ch[i] > 47 && ch[i] < 58)
				j = 0;
		}
	}
	return (ch);
}
