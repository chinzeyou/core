/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:32:10 by zchin             #+#    #+#             */
/*   Updated: 2026/08/02 12:58:42 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ans;

	if (!s1 || !s2)
		return (NULL);
	ans = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ans[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
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