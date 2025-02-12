#include <unistd.h>

void	solve(char *s1, char *s2)
{
	int	i;
	char	arr[256] = {0};

	i = 0;
	while (s1[i])
	{
		if (arr[(int)s1[i]] == 0)
			arr[(int)s1[i]] = 1;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (arr[(int)s2[i]] == 1)
		{
			arr[(int)s2[i]] = 2;
			write(1, &s2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
