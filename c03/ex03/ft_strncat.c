char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				strlen;

	i = 0;
	strlen = 0;
	while (dest[strlen] != '\0')
		strlen++;
	while (i < nb && src[i] != '\0')
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}
