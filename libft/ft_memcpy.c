/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 12:38:42 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 17:31:29 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srcs;
	unsigned char		*dsts;

	srcs = src;
	dsts = dst;
	i = 0;
	while (i < n)
	{
		dsts[i] = srcs[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char str1[20] = "HELLO WORLD";
	char str2[20] = "HELLO WORLD";

	ft_memcpy(str1 + 2, str1, 5);
	memcpy(str2 + 2, str2, 5);

	printf("ft_memcpy: %s\n", str1); // Expected: HEHELLOWORLD
	printf("memcpy: %s\n", str2); // Expected: HEHELLOWORLD

	return (0);
}
    */