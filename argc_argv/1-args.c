#include <stdio.h>
/**
 * main - counts args in argc
 * @argc: argument count in array
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{	
	if (argc >= 1)
	{
		printf("%s\n", argc -1);
	}
	return (0);
}
