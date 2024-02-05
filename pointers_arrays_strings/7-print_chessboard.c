#include "main.h"
/**
 * print_chessboard - prints a chessboard using 2d array
 * @a: points to multi dimesnional array
 * @[8]: array of chars being pointed to
 *Return: value 0
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
