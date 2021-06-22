void	col_up(int rules[4][4], int board[4][4])
{
	int	i;
	int	j;
	int	z;
	int	nn;

	z = 0;
	while (z < 4)
	{
		nn = rules[0][z];
		i = 0;
		j = 0;
		while (i < nn)
		{
			if (nn < 4 && (i == nn - 1))
				board[i][z] = 4;
			else
				board[i][z] = i + 1;
			i++;
		}
		z++;
	}
}

void	col_down(int board[4][4])
{
	int	i;
	int	j;

	j = 1;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (board[i][j] == board[0][j]
				&& board[0][j] < 4
			)
				board[i][j] = board[i][j - 1] + 1;
			i++;
		}
		j++;
	}
}
