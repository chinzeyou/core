/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 13:22:07 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 16:26:33 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_len(long n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	neg_or_zero(char *ans, long *num)
{
	if (*num < 0)
	{
		ans[0] = '-';
		*num = -*num;
	}
	if (*num == 0)
		ans[0] = '0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*ans;
	long	num;

	num = n;
	len = count_len(num);
	ans = malloc((len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = len - 1;
	if (num <= 0)
		neg_or_zero(ans, &num);
	while (num > 0)
	{
		ans[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	ans[len] = '\0';
	return (ans);
}
/*
int	main()
{
	int n = -123123;
	printf("%d\n", n);
	printf("%s", ft_itoa(n));
}
*/