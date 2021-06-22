#include <unistd.h>

void	print (char c, int b)
{
	char	bb;
	int		count;

	bb = b + 48;
	count = 0;
	while (count < c && b)
	{
		write(1, &c, 1);
		write(1, &bb, 1);
		write(1, ", ", 2);
	}
}

void	ft_putchar (char c, int max, int min)
{
	int	count;

	count = 1;
	max = (max * max) * 10;
	if (count < max)
	{
		write(1, &c, 1);
		max = max - 1;
		c = c + 1;
		ft_putchar(c, max, min);
	}
}

void	ft_print_combn(int n)
{
	char	b;
	int		a;
	int		c;
	int		count;

	a = 0;
	b = 1;
	c = 10 * n;
	count = 0;
	c = '2';
	while (count < 9)
	{
		b = a + 48;
		ft_putchar(b, n, count);
		write(1, ", ", 2);
		count++;
		if (count == 8 && a < 9)
		{
			a++;
			count = 0;
		}
	}
}
