#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			l = s;
		s++;
	}
	return ((char *)l);
}
