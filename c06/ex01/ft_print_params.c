#include <unistd.h>

void	ft_print_params(char *args)
{
	while (*args)
	{
		write(1, &*args, 1);
		args++;
	}
	write(1, "\n", 1);
}

int	main (int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		ft_print_params(argv[i]);
		argc--;
		i++;
	}
	return (0);
}
