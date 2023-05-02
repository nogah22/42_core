/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:46:23 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 15:42:54 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// In this implementation, we first call ft_memchr to search for the character 
// c in the string s. 

// We pass ft_strlen(s) + 1 as the n parameter to ft_memchr, which ensures that 
// the search includes the null terminator of the string.

// If ft_memchr returns a pointer to the character c, we simply return that 
// pointer. 

// Otherwise, we return NULL to indicate that the character was not found in 
// the string.

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
