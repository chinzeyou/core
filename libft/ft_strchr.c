/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:10:40 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 13:02:57 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if ((char)c == *str)
		{
			return (str);
		}
		str++;
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
	char s1[] = "Hello";
	char s2[] = "Hello";

	printf("%s\n", strchr(s1, 'e'));
	printf("%s\n", ft_strchr(s2, 101));
}
	*/