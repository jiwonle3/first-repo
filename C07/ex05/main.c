#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char *str = "Hello,world!!123";
	char *charset = ",!";
	char **result;
	int i;

	i = 0;

	result = ft_split(str, charset);

	while (result[i])
	{
		printf("result[%d] = %s\n", i, result[i]);
		i++;
	}

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
