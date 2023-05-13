/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 13:05:32 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function is identical to ft_strchr(), except it locates the last occurrence.

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len - 1] == (unsigned char)c)
			return ((char *)s + len - 1);
		len--;
	}
	return (NULL);
}

// test ft_strrchr function compared to strrchr function

// int main(void)
// {
// 	char	str1[] = "Hello World!";
// 	char	str2[] = "Hello World!";

// 	printf("ft_strrchr: %s\n", ft_strrchr(str1, 'l'));
// 	printf("strrchr: %s\n", strrchr(str2, 'l'));
// 	return (0);
// }