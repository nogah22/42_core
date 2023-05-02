/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:10:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 13:14:05 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This implementation first gets the length of the source string using 
// ft_strlen, then checks if there is enough space in the destination buffer 
// to copy the entire string plus the terminating null character. 

// If there isn't enough space, it copies only dstsize - 1 characters and adds 
// a null terminator at the end. 

// Finally, it returns the length of the source string regardless of whether it
// was fully copied or not.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize > 0)
	{
		if (slen >= dstsize)
			slen = dstsize - 1;
		ft_memcpy(dst, src, slen);
		dst[slen] = '\0';
	}
	return (slen);
}
