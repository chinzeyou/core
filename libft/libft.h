/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 13:14:57 by zchin             #+#    #+#             */
/*   Updated: 2026/08/01 13:15:17 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

	#include <stdlib.h>
	#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

//delete
#include <stdio.h>
#include <string.h>
#include <limits.h>

size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);


typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
#endif