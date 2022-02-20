/*strrindex: retorna rightmost index de t em s, e retorna -1 se não achar nada*/

int	strindex(char s[], char t[])
{
	int i;
	int j;
	int k;
	int pos;

	pos = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j+=, k++);
			if (k > 0 && t[k] == '\0')
			pos = i;
	}
	return pos;
}
