/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:37:10 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 13:43:20 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates sufficient memory for a copy of the string s1, does the
// copy, and returns a pointer to it. The pointer may subsequently be used as
// an argument to the function free(3). If insufficient memory is available,
// NULL is returned. 

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)ft_calloc(len + 1, sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}

// test ft_strdup function compared to strdup function

// int main(void)
// {
//     char *s1 = "hello world";
//     char *s2 = "hello world";
// 	char *s1_dup = strdup(s1);
//     char *s2_dup = ft_strdup(s2);

//     if (strcmp(s1_dup, s2_dup) == 0) {
//         printf("ft_strdup and strdup produced the same result\n");
//     } else {
//         printf("ft_strdup and strdup produced different results\n");
//         printf("ft_strdup: %s\n", s2_dup);
//         printf("strdup: %s\n", s1_dup);
//     }
// 	free(s1_dup);
//     free(s2_dup);
//     return 0;
// }