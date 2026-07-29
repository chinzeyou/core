/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:31:02 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 14:47:37 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	unsigned char target;
	size_t i;

	i = 0;
	str = s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == target)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

int	main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	
	printf("%s\n", (char *)memchr(s1, 'l', 5));
	printf("%s\n", (char *)ft_memchr(s1, 'l', 5));
}