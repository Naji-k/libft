/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 23:32:02 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/10/26 22:16:43 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/* #include <string.h>

int	main(void)
{
	char str1[15];
	char str2[15];
	int ret;
	int me;

	memcpy(str1, "asd", 8);
	memcpy(str2, "asdasd", 8);

	ret = memcmp(str1, str2, 6);
	me = ft_memcmp(str1, str2, 6);
	if (ret != me)
	{
		printf("ret=%d\n", ret);
		printf("me=%d\n", me);
	}
	else
		printf("OK");
	return (0);
} */