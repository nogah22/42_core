/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:36:10 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 13:36:27 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This implementation first finds the length of the destination string and 
// the length of the source string using ft_strlen.

// It then calculates the number of bytes left in the destination string buffer 
// to append the source string, and checks whether the destination buffer has 
// enough space to hold both the destination string and the source string.

// If the destination buffer has enough space, it appends the source string to 
// the end of the destination string using ft_memcpy, and adds a null terminator
// at the end of the concatenated string. 

// If the destination buffer does not have enough space, it returns the total 
// length of the concatenated string without actually concatenating them.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	max;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	max = dstsize - dlen - 1;
	if (dstsize <= dlen)
		return (dstsize + slen);
	if (slen < max)
		max = slen;
	ft_memcpy(dst + dlen, src, max);
	dst[dlen + max] = '\0';
	return (dlen + slen);
}
