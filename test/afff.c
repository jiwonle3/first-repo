#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	asd(char *str)
{
	int	i;
	char	o;
	i = 0;
	o = 10;

	while (str[i] != 0)
	{
		if (str[i] == 'a')
		{
			print('a');
			print(o);
			return ;
		}
		i++;
	}
	print(o);
}

int	main(int argc, char *argv[])
{
	char	o;
	o = 10;

	if (argc == 2)
	{
		asd(argv[1]);
	}
	else
	{
		print('a');
		print(o);
	}
	return 0;
}
	 

