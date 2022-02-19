/*invert: inverte the n bites de x que começa na posição p*/

unsigned	invert(unsigned x, int p, int n)
{
	return x ˆ (˜(˜0 << n) << (p + 1 - n));
}
