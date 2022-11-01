/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 20:17:05 by nakanoun      #+#    #+#                 */
/*   Updated: 2022/10/26 22:22:21 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len) && haystack[i
				+ j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)

{
	char *str1 = "";
	char *to_find = "teste";
	size_t s = 1;

	printf("me=%s\n", ft_strnstr(str1, str1, s ));
	printf("fn=%s\n", strnstr(str1, str1, s ));
} */