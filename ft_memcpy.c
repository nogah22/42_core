/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:40:46 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 13:44:31 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

// test ft_memcpy function compared to memcpy function.

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	ft_memcpy(str1+6, str1, 5);
// 	memcpy(str2+6, str2, 5);
// 	printf("ft_memcpy: %s\n", str1);
// 	printf("memcpy: %s\n", str2);
// 	return (0);
// }