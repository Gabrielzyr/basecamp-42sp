#include <unistd.h>

int	rush (int x, int y);

int	get_nbr (char *arr)
{
	int	number;
	int	symbol;

	number = 0;
	symbol = 1;
	while (('-' == (*arr)) || ((*arr) == '+'))
	{
		if (*arr == '-')
		{
			write (1, "negative numbers aren't valid\n", 31);
			return (0);
		}
		arr++;
	}
	while ((*arr >= '0') && (*arr <= '9'))
	{
		number = (number * 10) + ((*arr) - '0');
		arr++;
	}
	if (number != 0 && number>-1 )
	{
		write (1, "erro\n", 5);
		return (0);
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc == 1 || argc == 2)
	{
		write(1, "missing arguments\n", 18);
		return (0);
	}
	a = get_nbr(argv[1]);
	b = get_nbr(argv[2]);
	if (!a || !b)
	{
		write(1, "Erro", 1);
		return(0);
	}
	rush(a, b);
	return (0);
}
