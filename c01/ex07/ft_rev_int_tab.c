#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	temp;

	z = 0;
	size -= 1;

	while (z <= size / 2)
	{	
		temp = tab[z];
		tab[z] = tab[size - z];
		tab[size - z] = temp;
		z++;
	}
}
