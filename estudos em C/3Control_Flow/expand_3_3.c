/*expand: espande uma pequena notação em s1 dentro da string s2*/
void	expand(char s1[]; char s2[])
{
	char c;
	int i;
	int j;

	i = j = 0;
	while ((c = s1[i++]) != '\0') /*pega um char de s1*/
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while (c < s1[i]) /*expand shothand*/
			s2[j++] = c++;
		}
		else
			s2[j++] = c; /*copy the character*/
		s2[j] = '0';
}
