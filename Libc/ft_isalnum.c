#include "libft.h"

int	ft_isalnum(char a)
{
	return (ft_isalpha(a) || ft_isdigit(a));
}
