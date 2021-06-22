int	ft_factorial ( int nb)
{
	int	acc;

	if (nb >= 1)
	{
		acc = nb * ft_factorial(nb - 1);
		return (acc);
	}
	else
		return (1);
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (ft_factorial(nb));
}
