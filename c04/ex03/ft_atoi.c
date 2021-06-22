#include <unistd.h>

int	ft_atoi (char *str)
{
	int	number;
	int	negative;
	int	i;

	number = 0;
	negative = 0;
	i = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number = (number * 10) + ((str[i]) - '0');
		i++;
	}
	if ((negative % 2) != 0)
		number = number * (-1);
	return (number);
}
