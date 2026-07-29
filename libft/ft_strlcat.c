/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:04:37 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 17:28:31 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	
	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (size + src_len);
	while(src[i] != '\0' && (dest_len + 1 + i < size))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[i + dest_len] = '\0';
	return (src_len + dest_len);
}

int	main()
{
	char s1[12] = "Hello";
	char s2[] = "Hella";
	//printf("%d\n", strlcat(s1, s2, 5));
	printf("%s\n", s1);
	printf("%zu\n", ft_strlcat(s1, s2, 2));
	printf("%s\n", s1);
}