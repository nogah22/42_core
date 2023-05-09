/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:53:16 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/09 14:06:24 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function locates the first occurrence of c (converted to an unsigned char)
// in string s. Returns a pointer to the byte located, or NULL if no such byte
// exists within n bytes.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_ptr;

	c_ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*c_ptr == (unsigned char)c)
			return (c_ptr);
		c_ptr++;
	}
	return (NULL);
}

// test ft_memchr function compared to memchr function.

// int main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_memchr: %s\n", ft_memchr(str, 'o', ft_strlen(str)));
// 	printf("memchr: %s\n", memchr(str2, 'o', ft_strlen(str2)));
// 	return (0);
// }