/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:44:21 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 17:30:58 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (str[i] != '\0' && i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main()
{
    char str[] = "Hello";
    bzero(str, (0));
    printf("%s", str);
    ft_bzero(str, 0);
    printf("%s", str);
}
    */