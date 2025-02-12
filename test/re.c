#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != 0)
	{
		print(str[i]);
		i++;
	}
}

int	len(char *str)
{
	int	i;
	int	l;
	l = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
		l++;
	}
	return (l);
}

char	*re(char *s1, char *s2, char *s3)
{
	int	i;
	i = 0;
	while (s1[i] != 0)
	{
		if(s1[i] == s2[0])
		{
			s1[i] = s3[0];
		}
		i++;
	}
	return (s1);
}

int	main(int argc, char *argv[])
{
	char	b;
	char	*a;
	b = 10;
	if (argc == 4)
	{
		if(len(argv[2]) == 1 && len(argv[3]) == 1)
		{
			a = re(argv[1], argv[2], argv[3]);
			putstr(a);
		}
	}
	print(b);
	return (0);
}
