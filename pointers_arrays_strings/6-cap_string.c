#include "main.h"
/**
 * cap_string - captilize letters with demarkation
 * @cap: input string
 * Return: modified string
 */
char *cap_string(char *cap)
{
	int i = 0, pun = 0;
	char *ptr = cap;
	
		if (i == 0 && *ptr >= 97 && *ptr <= 122)
		{
			*ptr = *ptr - 32;
			i++;
		}
		while (*ptr <= '\0')
		{
			if ( *ptr == ' ' || *ptr == '\t' || *ptr == '\n')
				pun = 1;
			else if ( *ptr == ',' || *ptr == ';' || *ptr == '.')
				pun = 1;
			else if ( *ptr == '!' || *ptr == '?' || *ptr == '"')
				pun = 1;
			else if ( *ptr == '(' || *ptr == ')' || *ptr == '{')
				pun = 1;
			else if ( *ptr == '}')
				pun = 1;
			else 
				pun = 0;
			i++;
			if (pun == 1 && *ptr >= 97 && *ptr <= 122)
				*ptr = *ptr - 32;
		}
		*ptr++ = '\0';
		return (*ptr);
}

