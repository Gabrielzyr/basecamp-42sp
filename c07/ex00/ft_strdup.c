#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_copy;

	str_copy = malloc(ft_strlen(src) + 1);
	if (str_copy == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str_copy[i] = src[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
