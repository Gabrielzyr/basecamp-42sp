#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbrs;
	int	i;
	int	a;

	a = max - min;
	nbrs = malloc(a * sizeof(nbrs));
	if (min >= max || nbrs == 0)
		return (NULL);
	i = 0;
	while ((min + i) < max)
	{
		nbrs[i] = min + i;
		i++;
	}
	return (nbrs);
}
