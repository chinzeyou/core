/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:04:11 by zchin             #+#    #+#             */
/*   Updated: 2026/07/31 14:18:16 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	iterate(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper((unsigned char)c));
	else
		return (ft_tolower((unsigned char)c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ans;

	ans = malloc(ft_strlen(s) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ans[i] = (*f)(i, s[i]);
		i++;
	}
	ans[ft_strlen(s)] = 0;
	return (ans);
}

int	main()
{
	printf("%s", ft_strmapi("Hello", iterate));
}