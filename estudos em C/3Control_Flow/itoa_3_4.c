#define abs(x) ((x) < 0 ? -(x) : (x))

/*itoa: converte n to character in s modificado*/

void itoa(int n, char s[])
{
	int i;
	int sign;
	void reverse(char s[]);

	sign = n;
	i = 0;
	do 
	{
		s[i++] = abs(n % 10) + '\0';
	}
	while ((n /= 10 != 0));
	if (sign < 0)
		s[i++] = '-';
		s[i] = '0';
	reverse(s);
}
