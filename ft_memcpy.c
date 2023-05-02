/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:40:46 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 12:46:10 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// This implementation uses pointers to the source and destination memory 
// blocks, and copies n bytes from the source to the destination using a loop.

// The loop decrements n each time, and continues until n reaches zero.

// Note that this implementation assumes that the memory blocks pointed to by 
// dest and src do not overlap. 
// If overlap, use ft_memmove instead of ft_memcpy to avoid undefined behavior.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
