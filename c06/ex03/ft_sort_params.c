#include <unistd.h>
int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;
	int				i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		a = s1[i];
		b = s2[i];
		return (a - b);
	}
	return (0);
}

void	ft_sort_strlen (int iargs, char *args[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < iargs)
	{
		j = i + 1;
		while (j < iargs)
		{
			if (ft_strlen(args[i]) > ft_strlen(args[j]))
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_params (int iargs, char *args[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < iargs)
	{
		j = i + 1;
		while (j < iargs)
		{
			if (ft_strcmp(args[i], args[j]) > 0)
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main (int argc, char *argv[])
{
	int		i;
	char	*args;

	ft_sort_params(argc, argv);
	ft_sort_strlen(argc, argv);
	i = 1;
	while (i < argc)
	{
		args = argv[i];
		while (*args)
		{
			write(1, &*args, 1);
			args++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
