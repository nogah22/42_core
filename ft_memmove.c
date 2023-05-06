/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:10:06 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 11:03:39 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// test ft_memmove compared to memmove so that they are identical.

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	//ft_memmove(str1, str1 + 6, 6);
// 	memmove(str2, str2 + 6, 6);
// 	printf("ft_memmove: %s\n", str1);
// 	printf("memmove: %s\n", str2);
// 	return (0);
// }