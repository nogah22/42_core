/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:40:46 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 11:03:34 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	if (dst == NULL)
		return (NULL);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}

// test ft_memcpy compared to memcpy so that they are identical.

// int	main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	ft_memcpy(str1, str1 + 6, 6);
// 	memcpy(str2, str2 + 6, 6);
// 	printf("ft_memcpy: %s\n", str1);
// 	printf("memcpy: %s\n", str2);
// 	return (0);
// }