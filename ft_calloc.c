/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:19:51 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/11 15:49:30 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// malloc() function allocates <size> bytes of memory and returns a pointer to
// the allocated memory.

// calloc() function contiguously allocates enough space for <count> objects 
// that are <size> bytes of memory each and returns a pointer to the allocated
// memory. The allocated memory is filled with bytes of value zero (0);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	else 
		ft_memset(ptr, 0, count * size);
	return (ptr);
}

// test ft_calloc function compared to calloc function.

// int main(void)
// {
//     int *a = (int *) ft_calloc(5, sizeof(int));
//     int *b = (int *) calloc(5, sizeof(int));

//     // compare the results
//     if (memcmp(a, b, 5 * sizeof(int)) == 0)
//         printf("ft_calloc works fine.\n");
//     else
//         printf("ft_calloc doesn't work.\n");

//     free(a);
//     free(b);
//     return (0);
// }