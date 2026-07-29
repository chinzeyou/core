/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:03:59 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 16:23:13 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		ans;
	int		i;
	int		neg;

	i = 0;
	ans = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	else
		neg = 1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ans = ans * 10 + (nptr[i] - '0');
		i++;
	}
	return (ans * neg);
}

//#include <limits.h>

int	main()
{
	printf("%d\n", atoi("--21474aa83648"));
	printf("%d\n", ft_atoi("--214aa748364"));
	//printf("%d\n", INT_MAX);
	printf("%d", ft_atoi("-101"));
}