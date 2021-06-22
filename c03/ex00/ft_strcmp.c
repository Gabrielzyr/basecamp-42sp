int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;
	int				i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'
		&& s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		a = s1[i];
		b = s2[i];
		return (a - b);
	}
	return (0);
}
