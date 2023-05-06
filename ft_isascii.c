/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:50:07 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/03 09:36:25 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1(TRUE) if c is a  char value that fits into the
// ASCII character (decimal) set, otherwise returns 0(FALSE).

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}
