#include "libft.h"

size_t	ft_strlcpy(char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	while (b[i] && i < n - 1)
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	c = 0;
	while (b[c])
	{
		c++;
	}
	return (c);
}
