#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns pointer of 2D array
* @width: row of array
* @height: column of array
* Return: returns 0
*/
int **alloc_grid(int width, int height)
 {
	 int x, y;
         int **ar;

	 if (width <= 0 || height <= 0)
	 {
		 return (NULL);
	 }
	 ar = malloc(sizeof(int *) * height);
	 if (ar == NULL)
	 {
		 free(ar);
		 return (NULL);
	 }
	 for (y = 0; y < height; y++)
	 {
		 ar[y] = malloc(sizeof(int) * width);
		 if (ar[y] == NULL)
		 {
			 for (y--; y >= 0; y--)
			 {
				 free(ar[y]);
			 }
			 free(ar);
			 return (NULL);
		 }
		 for (x = 0; x < width; x++)
		 {
			 ar[y][x] = 0;
		 }
	 }
	 return (ar);
 }
