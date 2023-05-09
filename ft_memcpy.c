/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:40:46 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/09 13:41:07 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function copies n bytes from src to dst. If dst and src overlap, behavior
// is undefined (dangerous). Use ft_memmove instead for overlapping memory.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

// test ft_memcpy function compared to memcpy function.

int main(void)
{
	char	str1[] = "Hello World!";
	char	str2[] = "Hello World!";

	ft_memcpy(str2+2, str1, 2);
	memcpy(str2+2, str1, 2);
	printf("ft_memcpy: %s\n", str2);
	printf("memcpy: %s\n", str2);
	return (0);
}