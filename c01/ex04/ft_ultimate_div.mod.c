#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	modl;

	div = 0;
	modl = 0;
	if (*b != 0)
	{
		div = *a / *b;
		modl = *a % *b;
	}
	*a = div;
	*b = modl;
}
