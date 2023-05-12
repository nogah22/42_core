/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:40:33 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/11 14:41:48 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function locates the first occurence of the null-terminated string needle
// in the string haystack, where not more than len characters are searched.
// Characters that appear after a `\0' character are not searched.

// If needle is an empty string, haystack is returned; if needle occurs 
// nowhere in haystack, NULL is returned; otherwise a pointer to the first.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if ((haystack == NULL && needle == NULL) || len == 0)
		return (NULL);
	if (needle_len > ft_strlen(haystack) || needle_len > len)
		return (NULL);
	while (*haystack != '\0' && len-- >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

//test ft_strnstr function compared to strnstr function

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_strnstr: %s\n", ft_strnstr(str1, "o", 5));
// 	printf("strnstr: %s\n", strnstr(str2, "o", 5));
// 	return (0);
// }