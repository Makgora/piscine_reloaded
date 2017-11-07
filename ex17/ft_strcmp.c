#include "stdio.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	printf("0, 1, -1, 1\n");
	printf("%d\n", ft_strcmp("a", "a"));
	printf("%d\n", ft_strcmp("ab", "a"));
	printf("%d\n", ft_strcmp("a", "ab"));
	printf("%d\n", ft_strcmp("z", "a"));
	return(0);
}
