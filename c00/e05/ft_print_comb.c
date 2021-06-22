#include <unistd.h>

int	print_nbr (char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
		return (0);
	else
		write(1, ", ", 2);
	return (0);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' )
	{
		b = '1';
		while (b <= '8')
		{
			c = '2';
			while (c <= '9')
			{
				if (a < b && b < c)
					print_nbr(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
