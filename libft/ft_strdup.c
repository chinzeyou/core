/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:15 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 15:46:38 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ans;

	len = ft_strlen(s);
	ans = malloc((len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, s, len + 1);
	return (ans);
}
/*
int	main()
{
	char	*ans = ft_strdup("Helloss");
	printf("%s\n", ans);
	free (ans);
}
*/