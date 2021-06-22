int	ft_str_is_alpha(char str)
{
	if ((str <= 122 && str >= 97 )
		|| (str <= 90 && str >= 65)
	)
		return (1);
	return (0);
}

int	ft_str_cap(char str)
{
	if (str <= 90 && str >= 65)
		return (1);
	return (0);
}

int	ft_str_is_numeric(char str)
{
	if (str >= 48 && str <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122
			&& !(ft_str_is_alpha(str[i - 1]))
		)
			str[i] -= 32;
		if ((ft_str_is_numeric(str[i - 1])
				|| ft_str_is_alpha(str[i - 1])
				|| ft_str_cap(str[i - 1]))
			&& i != 0
			&& ft_str_cap(str[i])
		)
			str[i] += 32;
		i++;
	}
	return (str);
}
