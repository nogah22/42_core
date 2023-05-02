/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:10:06 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 15:12:49 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_memmove function is used to copy a block of memory from the source 
// pointer src to the destination pointer dst. 

// Unlike ft_memcpy, it handles overlapping memory regions correctly.

// If dst and src are pointing to the same location in memory.
// If they are, there's no need to copy the data and we can return the dst 
// pointer immediately.

// If dst is greater than src, copy the data from the end of the block to the 
// beginning to prevent overwriting data that has not been copied yet.

//If dst is less than src, copy the data from the beginning to the end.

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len -- > 0)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
