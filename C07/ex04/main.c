#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*result;

	nbr = "42";
	base_from = "0123456789";
	base_to = "01";
	result = ft_convert_base(nbr, base_from, base_to);

	printf("test \"%s\" from base \"%s\" to base \"%s\" -> %s\n", nbr, base_from, base_to, result);
	free(result);
	return (0);
}
