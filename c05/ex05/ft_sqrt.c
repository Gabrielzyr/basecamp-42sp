int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	i = 2;
	while ((nb / (i * i)) >= 1)
	{
		if ((nb / (i * i)) == 1 && (nb % (i * i)) == 0)
			return (i);
		i++;
	}
	return (0);
}
