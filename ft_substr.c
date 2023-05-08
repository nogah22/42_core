/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:59:01 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/08 07:50:19 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// test ft_substr function compared to substr function

// int main(void)
// {
// 	char *s1 = "hello world";
// 	char *s2 = "hello world";
// 	char *s2_substr = ft_substr(s2, 3, 5);

// 	if (strcmp(s1, s2_substr) == 0) {
// 		printf("ft_substr and substr produced the same result\n");
// 	} else {
// 		printf("ft_substr and substr produced different results\n");
// 		printf("ft_substr: %s\n", s2_substr);
// 		printf("substr: %s\n", s1);
// 	}

// 	free(s2_substr);

// 	return 0;
// }