#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c;
	c = 'z';
	print(c);
	while (c != 'A')
	{
		c--;
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
			print(c);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 32;
			print(c);
		}
	}
	return 0;
}
