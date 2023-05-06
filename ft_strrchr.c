/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 11:04:08 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*pos;

	len = ft_strlen(s);
	pos = (char *)ft_memchr(s + len, c, len + 1);
	if (pos == NULL)
		return (NULL);
	while (pos > s && *pos != c)
		pos--;
	if (*pos == c)
		return (pos);
	else
		return (NULL);
}
