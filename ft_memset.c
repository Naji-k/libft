/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 18:30:00 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/10/27 18:03:17 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (str);
}
