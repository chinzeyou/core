/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:31:38 by zchin             #+#    #+#             */
/*   Updated: 2026/08/02 12:27:24 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ans = malloc(len + 1);
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0' )
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main()
{
	char s1[] = "Hello World";
	printf("%s\n", ft_substr(s1, 2, 10));
}
*/