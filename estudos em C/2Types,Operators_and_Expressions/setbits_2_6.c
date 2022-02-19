#include <stdio.h>

/* setbits: set n bits of x na posição p com os bits de y*/
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return & ˜(˜(˜0 << n) << (p + 1 - n)) | (y & ˜(˜0 << n)) << (p + 1 - n);
}
