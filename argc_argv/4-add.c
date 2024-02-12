#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds only positive numbers
 *@argc: argument count
 *@argv: array containing arguments
 *Return: 0 for succcess, 1 for error
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *p;

	if (argc == 2 && atoi(argv[1]) > 0)
		printf("%d\n", atoi(argv[1]));
	else if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			if (p[0] != '-')
			{
				for (j = 0; p[j] != '\0'; j++)
				{
					if (!isdigit(p[j]))
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
