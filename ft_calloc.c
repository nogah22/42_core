/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:19:51 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/07 16:36:32 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != NULL)
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