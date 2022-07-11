

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}	
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	while (i < size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}
