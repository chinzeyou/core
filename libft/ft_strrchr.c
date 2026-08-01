/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:51:27 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 12:58:17 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	str = str + len;
	while (len >= 0)
	{
		if ((char)c == *str)
			return (str);
		str--;
		len--;
		if (len == 0)
		{
			break ;
		}
	}
	if ((char)c == '\0')
	{
		return (str);
	}
	return (NULL);
}
/*
int main()
{
	char s1[] = "Hellolzzz";

	printf("%s\n", strrchr(s1, 'l'));
	printf("%s\n", ft_strrchr(s1, 'l'));
}
*/