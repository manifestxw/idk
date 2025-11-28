#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = malloc(s1_len + s2_len + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i - s1_len < s2_len)
	{
		newstr[i] = s2[i - s1_len];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
