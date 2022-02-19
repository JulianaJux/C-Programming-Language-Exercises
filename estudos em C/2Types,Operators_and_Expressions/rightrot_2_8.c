
/*rightrot: rotaciona X para a direita por n posições*/

unsigned rightrot(unsigned x, int n)
{
	int wordlenght(void);
	unsigned rbits;

	if ((n = n % wordlenght()) > 0)
	{
		rbits = ˜(˜0 << n) & x;
		rbits = rbits << (wordlenght() - n);
		x = x >> n;
		x = x | rbits;
	}
	return x;
}
