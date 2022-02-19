/*bitcount: conta 1 bit em x, versão rápida*/

int	bitcount(unsigned x)
{
	int b;

	for (b = 0; x != 0; x &= x - 1)
	++b;
	return b;
}
