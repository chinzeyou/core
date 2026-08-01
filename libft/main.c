#include "libft.h"

void	print_list(t_list *head)
{
	t_list *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("%s ->", (char *)tmp->content);
		tmp = tmp->next;
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