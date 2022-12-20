#include "main.h"
/**
 * swap_int -swaping the value of two int
 * @a: first int
 * @b: Second int
 * Return 0;
 */
void swap_int(int *a, int *b);
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
