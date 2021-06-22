int	ft_str_is_alpha(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] <= 122 && str[idx] >= 97))
			if (!(str[idx] <= 90 && str[idx] >= 65))
				return (0);
		idx++;
	}
	if (str[0] == '\0')
		return (1);
	return (1);
}
