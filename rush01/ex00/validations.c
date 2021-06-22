#include <unistd.h>

int	validate_column_rows (int *nbrs)
{
	int	i;

	i = -1;
	while (i++ < 4)
	{	
		if ((nbrs[i] == nbrs[i + 4] && nbrs[i] != 2)
			|| (nbrs[i] == 3 && nbrs[i + 4] > 2)
			|| (nbrs[i] == 4 && nbrs[i + 4] > 1)
		)
			return (1);
	}
	i = 7;
	while (i++ < 12)
	{	
		if ((nbrs[i] == nbrs[i + 4] && nbrs[i] != 2)
			|| (nbrs[i] == 3 && nbrs[i + 4] > 2)
			|| (nbrs[i] == 4 && nbrs[i + 4] > 1)
		)
			return (1);
	}
	return (0);
}

int	is_nbr_valid(int *nbrs)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (!(nbrs[i] >= 1 && nbrs[i] <= 4))
		{
			return (1);
		}
		i++;
	}
	i = 0;
	if (validate_column_rows(nbrs))
		return (1);
	return (0);
}

int	nbrs_converter(char *args, int *nbrs)
{	
	int	i;
	int	z;
	int	count;

	i = 0;
	z = 0;
	count = 0;
	nbrs[i] = 0;
	while (args[z] != '\0')
	{
		if (args[z] < '1' && args[z] > '4'
			&& (args[z] != ' '
				|| (9 > args[z] || args[z] > 13))
		)
			return (1);
		else if (args[z] >= '1' && args[z] <= '4')
		{
			nbrs[count] = args[z] - '0';
			count++;
		}
		z++;
	}
	return (count);
}

int	fill_rules (int *nbrs, int rules[4][4])
{
	int	i;
	int	z;
	int	count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		z = 0;
		while (z < 4)
		{
			rules[i][z] = nbrs[count];
			count++;
			z++;
		}
		i++;
	}
	return (0);
}

int	get_validations (char *args, int *nbrs, int rules[4][4])
{
	int	cnt;

	cnt = nbrs_converter(args, nbrs);
	if (cnt != 16)
		return (1);
	if (is_nbr_valid(nbrs) != 0)
		return (1);
	fill_rules(nbrs, rules);
	return (0);
}
