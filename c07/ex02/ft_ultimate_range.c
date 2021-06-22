#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*nbrs;
	int	i;
	int	a;

	a = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbrs = malloc(a * sizeof(nbrs));
	if (nbrs == 0)
		return (-1);
	i = 0;
	while ((min + i) < max)
	{
		nbrs[i] = min + i;
		i++;
	}
	*range = nbrs;
	return (i);
}
