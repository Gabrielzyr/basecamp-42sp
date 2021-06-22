int	ft_power_aux (int nb, int power)
{
	int	acc;

	if (power >= 1)
	{
		acc = nb * ft_power_aux(nb, power - 1);
		return (acc);
	}
	else
		return (1);
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	return (ft_power_aux(nb, power));
}
