#include <stdlib.h>

int	len(const char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*dup(const char *str)
{
	char	*a;
	char	*b;

	a = (char*)malloc(sizeof(char) * len(str) + 1);
	b = a;
	while(*str)
	{
		*b++ = *str++;
	}
	*b = 0;
	return (a);
}
