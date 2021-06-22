int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (i);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (ft_is_prime(i) == 0)
		i++;
	if (ft_is_prime(i))
		return (ft_is_prime(i));
	return (nb);
}
