#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		return (ft_strdup(""));
	}
	if (len > slen - start)
		len = slen - start;
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start] + i;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
