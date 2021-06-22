#include <unistd.h>
void	ft_print_program_name(char *program)
{
	while (*program)
	{
		write(1, &*program, 1);
		program++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_print_program_name(argv[0]);
	return (0);
}
