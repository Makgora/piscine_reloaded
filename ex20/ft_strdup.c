#include "stdlib.h"

int		ft_strlen(char *src)
{
	int		src_len;

	src_len = 0;
	while(src[src_len] != '\0')
		src_len++;
	return (src_len);
}


void	*ft_memcpy(void *str1, void *str2, int n)
{
	char	*p_str1;
	char	*p_str2;

	p_str1 = (char *)str1;
	p_str2 = (char *)str2;
	while (n-- > 0)
		*p_str1++ = *p_str2++;
	return (str1);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*new_src;

	src_len = ft_strlen(src);
	new_src = (char *)malloc(src_len + 1);
	if (!new_src)
		return (NULL);
	new_src = ft_memcpy(new_src, src, src_len);
	new_src[src_len] = '\0';
	return (new_src);
}
