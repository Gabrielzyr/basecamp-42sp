#include <unistd.h>
#include <stdio.h>

int	rush (int board[4][4], int rules[4][4]);
int	get_validations (char *args, int *nbrs, int rules[4][4]);

int	ft_init(int rules[4][4], int board[4][4])
{
	int	i;
	int	z;

	i = 0;
	while (i < 4)
	{
		z = 0;
		while (z < 4)
		{
			rules[i][z] = 0;
			board[i][z] = 1;
			z++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	nbrs[16];
	int	rules[4][4];
	int	board[4][4];

	ft_init(rules, board);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (get_validations(argv[1], nbrs, rules))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	rush(board, rules);
	return (0);
}
