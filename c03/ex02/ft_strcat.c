char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (dest[strlen] != '\0')
		strlen++;
	while (src[i] != '\0')
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}
