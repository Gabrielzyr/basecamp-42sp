#include <unistd.h>

void	ft_putnbr (char n)
{
	write(1, &n, 1);
}

int	ft_strlen (char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	print_nbr (int nbr, char *base, unsigned int base_len)
{
	unsigned int	nbr2;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr2 = (unsigned int)(nbr * -1);
	}
	else
		nbr2 = (unsigned int)(nbr);
	if (nbr2 < base_len)
		ft_putnbr(base[nbr2]);
	else
	{
		print_nbr(nbr2 / base_len, base, base_len);
		print_nbr(nbr2 % base_len, base, base_len);
	}
}

int	validate (unsigned int unbr, char *base)
{
	int	i;
	int	stlen;
	int	err;

	stlen = ft_strlen(base);
	if (stlen <= 1)
		return (1);
	err = 0;
	i = 0;
	while (i < stlen)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			err++;
		i++;
	}
	if (err != 0)
		return (1);
	print_nbr(unbr, base, stlen);
	return (0);
}

void	ft_putnbr_base (int nbr, char *base)
{
	if (!(validate(nbr, base)))
		return ;
}
