/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:06:19 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 13:28:12 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates and returns a copy of 's1' with the characters specified
// in 'set' removed from the beginning an the end of the string.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}

// test ft_strtrim functions works

//  int main(void)
//  {
// 	 char *s1 = "hello world hello hell hello heaven";
// 	 char *set = "hello";
// 	 char *s_trim = ft_strtrim(s1, set);

// 	 printf("ft_strtrim: %s\n", s_trim);
// 	 free(s_trim);
// 	 return (0);
//  }
