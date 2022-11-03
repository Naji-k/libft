/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: NajiKanounji <NajiKanounji@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 02:04:44 by NajiKanounj   #+#    #+#                 */
/*   Updated: 2022/11/03 23:36:28 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_create_new(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*root;

	if (!lst)
		return (NULL);
	root = ft_create_new((*f)(lst->content));
	if (!root)
		return (NULL);
	new = root;
	while (lst->next)
	{
		new->next = ft_create_new((*f)(lst->next->content));
		if (new == NULL)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		new = new->next;
		// root->next = temp;
		lst = lst->next;
		// root = root->next;
	}
	return (root);
}
