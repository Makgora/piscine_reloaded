int	ft_count_if(char **tab, int (*f)(char))
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		       sum++;	
	}
	return (sum);
}
