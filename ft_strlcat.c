/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:36:10 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 14:33:17 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	max;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	max = dstsize - dlen - 1;
	if (dstsize <= dlen)
		return (dstsize + slen);
	if (slen < max)
		max = slen;
	ft_memcpy(dst + dlen, src, max);
	dst[dlen + max] = '\0';
	return (dlen + slen);
}

// test ft_strlcat comparing with strlcat that they are identical.

// int main(void)
// {
// 	char	str1[50] = "Hello ";
// 	char	str2[50] = "Hello ";
// 	char	str3[] = "World!";
// 	char	str4[] = "World!";

// 	ft_strlcat(str1, str3, 10);
// 	strlcat(str2, str4, 10);
// 	printf("ft_strlcat: %s\n", str1);
// 	printf("strlcat: %s\n", str2);
// 	return (0);
// }