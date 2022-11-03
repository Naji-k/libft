/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 19:59:10 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/11/03 18:25:53 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *head)
{
	head->next = *lst;
	*lst = head;
}

/* #include <stdio.h>
int	main(void)
{
	t_list	*test;
	t_list	*head;

	head = ft_lstnew("1");
	head->next = ft_lstnew("2");
	head->next->next = ft_lstnew("3");
	test = ft_lstnew("55");
	ft_lstadd_front(&head, test);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
 */