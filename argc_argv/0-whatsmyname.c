#include <stdio.h>
/**
 * argc_argv
 * @c:
 *
 *
 */
int main(int argc, char** argv)
{
	int i = 0;

	while (i <= (argc - 1))
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}

