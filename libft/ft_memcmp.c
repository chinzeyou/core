/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:48:14 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 13:10:05 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;
	int					diff;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < n && str1[i] == str2[i])
	{
		i++;
	}
	diff = str1[i] - str2[i];
	return (diff);
}
/*
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Jella";
	printf("%d\n", memcmp(s1, s2, 0));
	printf("%d\n", ft_memcmp(s1, s2, 0));
}
	*/