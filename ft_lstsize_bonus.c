/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 23:38:23 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/11/03 18:45:10 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i + 1);
}

/* #include <stdio.h>
int	main(void)
{
	t_list *head;
	head = ft_lstnew("1");
	head->next = ft_lstnew("12");
	head->next->next = ft_lstnew("123");
	printf("%d", ft_lstsize(head));
}
 */