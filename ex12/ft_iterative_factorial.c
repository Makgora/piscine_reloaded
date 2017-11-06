int	ft_iterative_factorial(int nb)
{
	int	sum;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		sum = 1;
		while (nb > 1)
		{
			sum *= nb;
			nb--;
		}

	}
	return (sum);
}
