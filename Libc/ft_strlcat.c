#include "libft.h"

size_t	strlcat(char *a, const char *b, size_t n)
{
	size_t	ac;
	size_t	bc;
	int	i;
	int	j;

	ac = 0;
	while (a[ac])
		ac++;
	bc = 0;
	while (b[bc])
		bc++;
	i = ac;
	j = 0;
	while (b[j] && i < n - 1)
	{
		a[i++] = b[j++];
	}
	a[i] = '\0';
	return (ac + bc);
}
