#include "main.h"
/**
 * puts2 - print every other character starting with first, new line
 * @str: inputs string
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
			putchar(*str);
		len++;
		str++;
	}
	putchar('\n');
}
