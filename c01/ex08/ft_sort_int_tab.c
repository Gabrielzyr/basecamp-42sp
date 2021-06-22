void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	z;

	count = 0;
	while (count < size)
	{
		z = count + 1;
		while (z < size)
		{
			if (tab[count] > tab[z])
			{
				temp = tab[count];
				tab[count] = tab[z];
				tab[z] = temp;
			}
			z++;
		}
		count++;
	}
}
