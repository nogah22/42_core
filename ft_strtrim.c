/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:06:19 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/08 09:05:13 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
 {
	size_t	len;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
 }
 