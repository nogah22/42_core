/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:59:01 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 11:08:30 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s) || start > len)
		return (NULL);
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// test ft_substr function works

// int main(void)
// {
// 	char *s = "hello world";
// 	char *s_substr = ft_substr(s, 4, 22);

// 	printf("ft_substr: %s\n", s_substr);
// 	free(s_substr);
// 	return (0);
// }