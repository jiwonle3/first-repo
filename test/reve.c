#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	rev(char *str)
{
	int	i;
	int	l;
	l = 0;
	i = 0;
	while (str[l] != 0)
	{
		l++;
		i++;
	}
	while (i != 0)
	{
		i--;
		print(str[i]);
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
		rev(argv[1]);
		print(o);
	}
	return 0;
}

