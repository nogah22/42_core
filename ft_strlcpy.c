/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:10:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 10:57:33 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (0);
	if (dstsize > 0)
	{
		if (slen >= dstsize)
			slen = dstsize - 1;
		ft_memcpy(dst, src, slen);
		dst[slen] = '\0';
	}
	return (slen);
}
