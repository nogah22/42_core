/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:53:43 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 12:12:19 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates and returns a new string, which is the result of the
// concatenation of 's1' and 's2'.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy(joined_str, s1, s1_len + 1);
	ft_strlcat(joined_str + s1_len, s2, s2_len + 1);
	return (joined_str);
}

// test ft_strjoin function works

int main(void)
{
	char *s1 = "hello ";
	char *s2 = "world!";
	char *joined_str = ft_strjoin(s1, s2);

	printf("ft_strjoin: %s\n", joined_str);
	free(joined_str);
	return (0);
}