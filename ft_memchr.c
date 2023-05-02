/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:53:16 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 15:17:04 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This implementation first casts the input s to an unsigned char pointer 
// and assigns it to a local variable ptr.

// Then, it iterates over the n bytes pointed to by s, checking each byte 
// against casted unsigned char c.

// If a matching byte is found, a pointer to that byte is returned. If no 
// matching byte is found after checking all n bytes, NULL is returned.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
