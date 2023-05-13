/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:52:46 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 10:12:32 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the length of the string.
// Experience from Piscine indicates that I will be using this function a lot.

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

//test ft_strlen function compared to strlen function

// int main()
// {
// 	char *str = "Hello World";
// 	int i = 0;
// 	int j = 0;
// 	while (i < 127)
// 	{
// 		if (ft_strlen(str) != strlen(str))
// 		{
// 			printf("ft_strlen(%s) = %zu\n", str, ft_strlen(str));
// 			printf("strlen(%s) = %zu\n", str, strlen(str));
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (j == 0)
// 		printf("ft_strlen is OK\n");
// 	else
// 		printf("ft_strlen is KO\n");
// 	return (0);
// }
