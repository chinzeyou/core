/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:54:19 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 17:02:18 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}
/*
int	main()
{
	char s1[] = "Hello";
	char s2[] = "Hella";
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%zu\n", ft_strlcpy(s1, s2, 5));
	printf("%s\n", s1);
}
*/