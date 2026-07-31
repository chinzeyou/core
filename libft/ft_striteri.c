/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:18:59 by zchin             #+#    #+#             */
/*   Updated: 2026/07/31 14:37:02 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void	iteration(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c + i;
		if (*c > 'z')
			*c = 'a' + (*c - 'z' - 1);
	}
}

int	main(void)
{
	char s[] = "abcd";
	ft_striteri(s, iteration);
	printf("%s", s);
}