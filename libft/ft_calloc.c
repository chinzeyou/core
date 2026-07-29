/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:28:12 by zchin             #+#    #+#             */
/*   Updated: 2026/07/29 16:48:41 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//add ft_bzero.c

void	*ft_calloc(size_t num, size_t size)
{
	void	*allocated_calloc;
	size_t	total_bytes;
	size_t	i;

	allocated_calloc = malloc(num * size);
	if (allocated_calloc == NULL)
		return (NULL);
	ft_bzero(allocated_calloc, size);
	return (allocated_calloc);
}

int	main()
{
	char *ans;
	ans = ft_calloc(5, 4);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", ans[i]);
		i++;
	}
	free(ans);
	return (0);
}
