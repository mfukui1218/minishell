#include "error.h"

void	sel_error(int sign)
{
	if (sign == ALLOCATE_ERROR)
	{
		printf("Error: Memory allocation failed\n");
		exit(0);
	}
}

