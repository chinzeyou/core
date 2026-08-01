/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 12:41:31 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 14:24:11 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = str;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
int main ()
{
    char str[] = "Hello";   
    memset(str, 'A', 6);
    printf("%s\n", str);
    ft_memset(str, 'C', 9);
    printf("%s\n", str);
}
    */