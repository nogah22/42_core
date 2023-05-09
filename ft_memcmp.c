/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:59:54 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/09 14:08:09 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function compares byte string s1 against byte string s2. Both strings are
// assumed to be n bytes long. Returns zero if the two strings are identical,
// otherwise returns the difference between the first two differing bytes.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// test ft_memcmp function compared to memcmp function.

// int main(void)
// {
// 	char	str[] = "Hallo World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_memcmp: %d\n", ft_memcmp(str2, str, 13));
// 	printf("memcmp: %d\n", memcmp(str, str2, 13));
// 	return (0);
// }