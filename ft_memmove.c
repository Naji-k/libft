/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 19:24:46 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/10/26 22:17:25 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;

	csrc = src;
	cdest = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (cdest > csrc)
	{
		while (n--)
			cdest[n] = csrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int	main(void)
{
 	char	src[50] = "helloGeeks";
	char	fn[50] = "helloGeeks";
	char	dest[50] = "123456";
	char	dest2[50] = "123456";
	char str1[50] = "I am going to Codam";
	char str2[50] = "I am going to Codam";
	
	printf("\nfn0=%s", memmove(fn, fn + 5, strlen(fn)));
	printf("\nme0=%s\n", ft_memmove(src, src + 5, strlen(src)));
	
	printf("\nfn1=%s", memmove(str1 + 2, str1, 4));
	printf("\nme1=%s\n", ft_memmove(str2 + 2, str2, 4));
	
	printf("\nfn2=%s",memmove(str2 + 5, str1, strlen(str1)));
	printf("\nme2=%s\n",ft_memmove(str2 + 5, str1, strlen(str1)));

	printf("\nfn3=%s",memmove(fn + 3 , fn, strlen(fn)));
	printf("\nme3=%s\n",ft_memmove(src + 3 , src, strlen(fn)));
	
	printf("\nfn4=%s",memmove("" , "" -1, 0));
	printf("\nme4=%s\n",ft_memmove("" , "" -1, 0));

	return (0);
} */