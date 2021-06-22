int	get_fib_index (int idx)
{
	int	acc;

	if (idx < 0)
		return (-1);
	else if (idx < 2)
		return (idx);
	else
	{
		acc = get_fib_index(idx - 1) + get_fib_index(idx - 2);
		return (acc);
	}
}

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	return (get_fib_index(index));
}
