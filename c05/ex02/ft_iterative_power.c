int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	acc;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	acc = nb * nb;
	i = 0;
	while (i++ < (power - 2))
		acc *= nb;
	return (acc);
}
