#include <unistd.h>

void	print(unsigned char a)
{
	int	b;
	int	c;

	b = 128;
	c = a;
	while (b != 0)
	{
		if (b <= c)
		{
			write(1, "1", 1);
			c = c % b;
		}
		else
		{
			write(1, "0", 1);
		}
		b = b / 2;
	}
}
