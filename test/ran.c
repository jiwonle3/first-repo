
#include <stdlib.h>

int	*ran(int st, int en)
{
	int	size;
	int	*arr;
	int	i;
	size = (st < en) ? en - st : st - en;
	*arr = malloc(sizeof(int) * (size + 1));
	i = 0;
	while (st != en)
		arr[i++] = (st < en) ? st++ : st--;
	arr[i] = en;
	return (arr);
}
