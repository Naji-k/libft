/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 19:58:38 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/11/02 20:50:19 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}

#include"stdio.h"
int	main(void)
{
	t_list *curr;

	curr = ft_lstnew((void*)42);
	
	printf("%p",(*curr).content);
	if (curr->content == (void *)42)
	printf("\nok");
	// curr = root;
	// while (curr != NULL)
	// {
	// 	//do something
	// 	printf("%d\n", curr->x);
	// 	curr = curr->next;
	// }
	// for (Node *cur = root)
	// printf("first elem:%d\n", root.x);
	// printf("2nd elem:%d\n", root.next->x);
	return (0);
}