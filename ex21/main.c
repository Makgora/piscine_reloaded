#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 0;
	i = 0;
	arr = ft_range(min, max);
	if (!arr)
		return (0);
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
