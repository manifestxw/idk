#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*a[];

	a = malloc(ft_strlen(s) + 1);
	while (
