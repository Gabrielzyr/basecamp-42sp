int	ft_putchar (char letter);

void	print_line(int width, char init, char mid, char end)
{
	int	x;

	x = 1;
	ft_putchar(init);
	while (x < width)
	{
		if (x > 1 && x < width)
		{
			ft_putchar(mid);
		}
		if (x == width - 1)
		{
			ft_putchar(end);
		}
		x++;
	}
	ft_putchar('\n');
}

void	rush ( int x, int y)
{
	int	height;

	height = 1;
	while (height <= y)
	{
		if (height == 1)
		{
			print_line(x, 'A', 'B', 'C');
		}
		if (height > 1 && height < y)
		{
			print_line(x, 'B', ' ', 'B');
		}
		if (height == y && height != 1 && y != 1)
		{
			print_line(x, 'A', 'B', 'C');
		}
		height++;
	}
}
