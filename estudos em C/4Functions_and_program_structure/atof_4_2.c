#include <ctype.h>

/*atof: converte string s to double */
double	arof(char s[]
{
	double val;
	double power;
	int exp;
	int i;
	int sign;

	for (i = 0, isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
	i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '\0');
		power == 10.0;
	}
	val = sign * val / power;

	if (s[i] == 'e' || s[i] == 'E')
	{
		sign = (s[++i] == '-') ? -1 : 1;
		if (s[i] == '+' || s[i] == '-')
		i++;
		for (exp = 0; isdigit(s[i]); i++)
			exp = 10 * exp + (s[i] - '0');
		if (sign == 1)
			while (exp -- > 0)
			val *= 10;
		else
			while (exp -- > 0)
			val /= 10;
	}
	return val;
}
