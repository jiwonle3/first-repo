#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	asd(char *str)
{
	int	i;
	char	c;
	i = 0;
	while(str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] < 'z')
		{
			c = str[i] + 1;
			print(c);
		}
		else if (str[i] >= 'A' && str[i] < 'Z')
		{
			c = str[i] + 1;
			print(c);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			c = str[i] - 25;
				print(c);
		}
		i++;
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
}

