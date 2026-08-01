/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 13:22:07 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 13:04:34 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	is_negative(int *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	int		is_neg;
	char	*ans;

	len = count_len(n);
	ans = malloc(len * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	is_neg = is_negative(&n);
	while (n != 0)
	{
		if (is_neg == 1)
		{
			ans[i] = '-';
			is_neg = 0;
		}
		ans[len - i - 1] = n % 10 + '0';
		n /= 10;
		i++;
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