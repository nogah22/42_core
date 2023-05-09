/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:49:16 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/09 16:02:59 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function compares not more than n characters of string s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	min_len;

	if (ft_strlen(s1) < ft_strlen(s2))
		min_len = ft_strlen(s1);
	else
		min_len = ft_strlen(s2);
	if (n > min_len)
		n = min_len;
	return (ft_memcmp(s1, s2, n));
}

// test ft_strncmp function compared to strncmp function

// int main(void)
// {
// 	char	str1[] = "Hdllo World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));
// 	printf("strncmp: %d\n", strncmp(str1, str2, 5));
// 	return (0);
// }