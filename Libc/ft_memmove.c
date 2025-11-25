#include "libft.h"

void	*ft_memmove(void *a, void *b, size_t n)
{
	unsigned char	*t;

	t = malloc(n);
	ft_memcpy(t, b, n);
	ft_memcpy(a, t, n);
	free(t);
	return (a);
}
