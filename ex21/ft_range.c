#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
