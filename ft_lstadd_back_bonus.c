/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 23:53:37 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/11/03 18:25:34 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = ft_lstlast(*lst);
	curr->next = new;
}

/* #include <stdio.h>
int	main(void)
{
	t_list *head;
	t_list *test;

	head = ft_lstnew("01");
	head->next = ft_lstnew("02");

	test = ft_lstnew("55");
	ft_lstadd_back(&head, test);

	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
 */