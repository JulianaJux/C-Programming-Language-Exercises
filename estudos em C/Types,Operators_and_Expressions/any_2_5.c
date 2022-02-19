#include <stdio.h>

/* any: retorna a primeira localização em s1 de qualquer char de s2*/
int any(char s1[], char s2[])
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
			if (s1[i] == s2[j])
				return i;
		return -1;
}
