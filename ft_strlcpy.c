/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:10:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 10:40:58 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function copies up to dstsize - 1 characters from the string src to dst,
// NULL-terminating the copied string. Oh yeah.
// Returns the len of new string copied.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (slen >= dstsize)
		slen = dstsize - 1;
	if (dstsize > 0)
	{
		ft_memmove(dst, src, slen);
		dst[slen] = '\0';
	}
	return (ft_strlen(src));
}

// test ft_strlcpy function comparing to strlcpy that they are identical.

// int main(void)
// {
// 	char	str1[50] = "Hello ";
// 	char	str2[50] = "Hello ";
// 	char	str3[] = "World!!!!!!!!!!";
// 	char	str4[] = "World!!!!!!!!!!";

// 	ft_strlcpy(str1, str3, 10);
// 	strlcpy(str2, str4, 10);
// 	printf("ft_strlcpy: %zu\n", ft_strlcpy(str1, str3, 10));
// 	printf("ft_strlcpy str1: %s\n", str1);
// 	printf("strlcpy: %lu\n", strlcpy(str2, str4, 10));
// 	printf("strlcpy str2: %s\n", str2);
// 	return (0);
// }