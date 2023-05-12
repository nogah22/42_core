/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:49:16 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/11 14:41:33 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function compares not more than n characters of string s1 and s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	return (0);
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