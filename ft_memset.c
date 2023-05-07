/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:58:12 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 11:30:21 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

// test ft_memset compared to memset so that they are identical (I hope)

// int	main(void)
// {
// 	char	str[50] = "This is a test string for memset";
// 	char	str2[50] = "This is a test string for memset";

// 	printf("Before memset(): %s\n", str);
// 	printf("Before ft_memset(): %s\n", str2);
// 	memset(str, '.', 10);
// 	ft_memset(str2, '.', 10);
// 	printf("After memset():  %s\n", str);
// 	printf("After ft_memset():  %s\n", str2);
// 	return (0);
// }