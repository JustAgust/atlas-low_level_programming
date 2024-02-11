#include <stdio.h>
/** main - prints all args received
 * @argc: argument counter
 * @argv: string of args
 *Return: 0 = success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
