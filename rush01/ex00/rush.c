#include <unistd.h>

void	col_up(int rules[4][4], int board[4][4]);
void	col_down(int board[4][4]);

int	fill_board(int rules[4][4], int board[4][4])
{
	col_up(rules, board);
	col_down(board);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_board(int board[4][4])
{
	int	i;
	int	z;

	i = 0;
	while (i < 4)
	{
		z = 0;
		while (z < 4)
		{
			ft_putchar(board[i][z] + '0');
			ft_putchar(' ');
			z++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	rush (int board[4][4], int rules[4][4])
{
	fill_board(rules, board);
	print_board(board);
	return (0);
}
