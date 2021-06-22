int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	a;
	unsigned char	b;
	int				i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((a = s1[i]) - (b = s2[i]));

	while (s1[i] != '\0' && s2[i] != '\0' && n > 1)
	{
		if (s1[i] != s2[i])
			return ((a = s1[i]) - (b = s2[i]));
		i++;
		n--;
	}
	if (s1[i] != s2[i])
		return ((a = s1[i]) - (b = s2[i]));
	return ((a = s1[i]) - (b = s2[i]));
}
