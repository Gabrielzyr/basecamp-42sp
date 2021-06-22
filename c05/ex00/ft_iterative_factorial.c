int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	n = nb * (nb - 1);
	i = 2;
	while (i < nb)
	{
		n *= nb - i;
		i++;
	}
	return (n);
}
