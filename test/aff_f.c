#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	aff(char *str)
{
	char	o;
	int	i;
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
	o = 10;
	if (argc == 1)
		print(o);
	else
		aff(argv[1]);
	return 0;
}
