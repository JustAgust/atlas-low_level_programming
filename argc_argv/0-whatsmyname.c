#include <stdio.h>
/**
 * main - takes input from argc and prints new name new line
 * @argc: argument count
 * @argv: array containing the string
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

