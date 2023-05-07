/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:40:33 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/07 16:01:46 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// test ft_strnstr function compared to strnstr function

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_strnstr: %s\n", ft_strnstr(str1, "o", 5));
// 	printf("strnstr: %s\n", strnstr(str2, "o", 5));
// 	return (0);
// }