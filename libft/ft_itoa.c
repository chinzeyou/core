#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	int		is_neg;
	char	*ans;

	len = 0;
	is_neg = 0;
	if (n < 0)
		len++;
		is_neg = 1;
		n = n * -1;
	while (n > 10)
		len++;
	ans = malloc(len * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	if (is_neg)
	{
		ans[i] = '-';
		i++;
	}
		
}