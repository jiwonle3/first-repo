#include <unistd.h>

void	print(char c)
{
	write(1, &c ,1);
}
 void	asd(char *c)
{
	int	i;
	int	a;
	a = 0;
	while (c[a] != 0)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			i = c[a] - 96;
			while (i != 0)
			{
				i--;
				print(c[a]);
			}
		}
		else if (c[a] >= 'A' && c[a] <= 'Z')
		{
			i = c[a] - 64;
			while (i != 0)
			{
				i--;
				print(c[a]);
			}
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	char	o;
	o = 10;
	if (argc != 2)
		print(o);
	else
	{
		asd(argv[1]);
		print(o);
	}
	return 0;
}
