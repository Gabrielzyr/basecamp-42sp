#include <unistd.h>

void	ft_rev_params(char *arg)
{
	while (*arg)
	{
		write(1, &*arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_rev_params(argv[argc - 1]);
		argc--;
	}
	return (0);
}
