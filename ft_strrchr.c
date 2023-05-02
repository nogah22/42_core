/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 16:39:57 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function first uses ft_strlen to find the length of the string s.

// It then calls ft_memchr to search for the character c starting from the 
// end of the string.

// We pass len + 1 as the length argument to ft_memchr so that it includes 
// the terminating null character in the search.

// If the character is not found, we return NULL.

// If the character is found, we then search backwards through the string, 
// looking for the last occurrence of c. 

// We do this by decrementing pos until we find c or reach the beginning 
// of the string. 

// If we find c, we return the 
// position of the last occurrence of c. Otherwise, we return NULL.

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*pos;

	len = ft_strlen(s);
	pos = (char *)ft_memchr(s + len, c, len + 1);
	if (pos == NULL)
		return (NULL);
	while (pos > s && *pos != c)
		pos--;
	if (*pos == c)
		return (pos);
	else
		return (NULL);
}
