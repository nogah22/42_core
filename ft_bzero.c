/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:23:53 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 11:03:15 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// test ft_bzero compared to bzero so that they are identical.

// int	main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	ft_bzero(str1, 5);
// 	bzero(str2, 5);
// 	printf("ft_bzero: %s\n", str1);
// 	printf("bzero: %s\n", str2);
// 	return (0);
// }