#include <stdio.h>
/**
 * argc_argv - takes input from argc and prints new name new line
 * @argc: argument count
 * @argv: array containing the string
 * @i: input string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i <= (argc - 1))
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}

