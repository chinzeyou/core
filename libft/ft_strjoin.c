/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:32:10 by zchin             #+#    #+#             */
/*   Updated: 2026/07/30 14:40:02 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*ans;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ans = malloc(s1_len + s2_len);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		ans[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		ans[i + j] = s2[j];
		j++;
	}
	ans[i + j] = '\0';
	return (ans);
}
/*
int	main()
{
	char s1[] = "Hello";
	char s2[] = "World";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/