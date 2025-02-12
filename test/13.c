#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	aaa(char *c)
{
	int	i;
	char 	a;
	i = 0;
	while(c[i] != 0)
	{
		if (c[i] >= 'A' && c[i] <= 'M')
		{
			a = c[i] + 13;
			print(a);
		}
		else if (c[i] <= 'Z' && c[i] >= 'N')
		{
			a = c[i] - 13;
			print(a);
		}
		else if (c[i] >= 'a' && c[i] <= 'm')
		{
			a = c[i] +13;
			print(a);
		}
		else if (c[i] <= 'z' && c[i] >= 'n')
		{
			a = c[i] - 13;
			print(a);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	a;
	a = 10;
	if (argc != 2)
		print(a);
	else
	{
		aaa(argv[1]);
		print(a);
	}
}
