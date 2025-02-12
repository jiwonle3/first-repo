#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	aff(char *str)
{
	int	i;
	char	o;
	i = 0;
	o = 10;
	while (str[i] != 0)
	{
		print(str[i]);
		i++;
	}
	print(o);
}

int	main(int argc, char *argv[])
{
	char	o;
	int	i;
	o = 10;
	if (argc == 1)
		print(o);
	else
	{
		i = argc - 1;
		aff(argv[i]);
	}
	return 0;
}
