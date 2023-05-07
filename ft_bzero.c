/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:23:53 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/07 13:20:50 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Note that bzero() is not part of the C standard anymore and has been 
// deprecated in favor of memset().

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// test ft_bzero compared to bzero function

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	ft_bzero(str1, 1);
// 	bzero(str2, 1);
// 	printf("ft_bzero: %s\n", str1);
// 	printf("bzero: %s\n", str2);
// 	return (0);
// }