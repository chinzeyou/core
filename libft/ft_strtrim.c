/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:51:52 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 12:51:34 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// add ft_strlen.c

int	contains_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*ans;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (start < end && contains_set(s1[start], set))
		start++;
	while (end > start && contains_set(s1[end - 1], set))
		end--;
	len = end - start;
	ans = malloc(len + 1);
	if (ans == NULL)
		return (NULL);
	while (start + i < end)
	{
		ans[i] = s1[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main()
{
	printf("%s\n", ft_strtrim("++Helloz0++", "+zzH0"));
}
*/