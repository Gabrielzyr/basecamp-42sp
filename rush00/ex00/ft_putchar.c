#include <unistd.h>

int	ft_putchar(char letter)
{
	write (1, &letter, 1);
	return (0);
}
