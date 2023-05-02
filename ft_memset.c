/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:58:12 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 10:31:02 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset function in C is used to set a block of memory with a particular
// value.

// It is often used to initialize arrays to a default value or to clear out a 
// block of memory before using it.

// For example, memset(my_array, 0, sizeof(my_array)); would set every byte in
// my_array to 0.

// This implementation sets each byte of the memory block pointed to by s to 
// the value of c, for a total of n bytes. The function returns a pointer to 
// the beginning of the memory block (s) so that it can be used in a chain of 
// function calls or as an argument to another function.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}
