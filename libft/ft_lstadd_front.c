/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchin <zchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 15:14:40 by zchin             #+#    #+#             */
/*   Updated: 2026/08/02 12:44:03 by zchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	printf("List state: ");
	while (current != NULL)
	{
		printf("%s - > ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head;
	head = NULL;

	printf("--- Testing ft_lstadd_front ---\n");
	print_list(head);

	t_list	*node1 = ft_lstnew("World");
	if (!node1)
		return (1);
	ft_lstadd_front(&head, node1);
	print_list(head);

	t_list	*node2 = ft_lstnew("Hello");
	if (!node2)
		return (1);
	
	ft_lstadd_front(&head, node2);
	print_list(head);

	t_list	*node3 = ft_lstnew("Hey");
	if (!node3)
		return (1);
	
	ft_lstadd_front(&head, node3);
	print_list(head);
	printf("\n Size: %d", ft_lstsize(head));

	free(node3);
	free(node2);
	free(node1);

	return (0);
}
*/