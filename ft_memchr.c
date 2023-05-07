/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:53:16 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 13:54:17 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
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