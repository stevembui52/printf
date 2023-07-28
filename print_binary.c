#include "main.h"
/**
 *
 *
 *
 *
 */
int print_bnr(int n)
{
	if (n > 1)
		print_bnr(n / 2);
	print_chr('0' + n % 2);
	return(0);
}
