/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:51:24 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/03 09:36:38 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1(TRUE) if c is a printable character, otherwise returns 0(FALSE).

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
