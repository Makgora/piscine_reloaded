void	ft_foreach(int *tab, int lenght, void(*f)(int))
{
	while (lenght > 0)
	{
		f(*tab);
		tab++;
		lenght--;
	}
}
