#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"hello", "world"};
	char	*sep = ", ";

	char	*result = ft_strjoin(2, strs, sep);

	printf("%s\n", result);
	free(result);
	return (0);
}
