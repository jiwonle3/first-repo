#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*range;
	int	step;

	if	(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	step = (start <= end) ? 1 : -1;
	for (i = 0; i < size; i++)
	{
		range[i] = start + (i * step);
	}
	return range;
}
