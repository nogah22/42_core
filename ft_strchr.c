/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:46:23 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 13:05:18 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function locates the first occurrence of c (converted to a char) in string
// s. The terminating null character is considered to be part of the string;
// therefore if c is `\0', the functions locate the terminating `\0'.
// Returns a pointer to the located character, or NULL if the character does
// not appear in the string.

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

// test ft_strchr function compared to strchr function.

// int main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_strchr: %s\n", ft_strchr(str, 'o'));
// 	printf("strchr: %s\n", strchr(str2, 'o'));
// 	return (0);
// }