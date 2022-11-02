/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 19:53:46 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/11/02 20:51:01 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (*lst == NULL)
	{
		free(lst);
		return ;
	}
	while (*lst != NULL)
	{
		curr = *lst;
		*lst = (*lst)->next;
		del(curr->content);
		free(curr);
	}
}
