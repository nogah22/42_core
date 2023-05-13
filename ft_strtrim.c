/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:06:19 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 15:09:30 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function allocates and returns a copy of 's1' with the characters specified
// in 'set' removed from the beginning an the end of the string.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]) != NULL)
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
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
