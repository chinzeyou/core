/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 12:41:31 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 12:43:04 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;
	int				i;

	p = str;
	i = 0;
	while (p[i] != '\0' && i < len)
	{
		p[i] = c;
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