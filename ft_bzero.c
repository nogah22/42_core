/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:23:53 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/02 10:58:45 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero function is similar to memset, but it is specifically designed 
// for setting memory to zero. Like memset, it returns a pointer to the 
// memory block that was passed as its first argument.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
