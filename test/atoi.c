int	atoi(const char *str)
{
	char	o;
	int	i;
	int	a;
	int	b;
	b = 0;
	a = 0;
	i = 1;
	o = 32;
	while (*str == '\r' || *str == '\f' || *str == '\v' || *str == '\n' || *str == '\t' || *str == o)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			i *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10;
		b = *str - '0';
		a += b;
		str++;
	}
	return (a * i);
}
