/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:03:57 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/08 11:06:51 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped_str;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	mapped_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mapped_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		mapped_str[i] = f(i, s[i]);
		i++;
	}
	mapped_str[i] = '\0';
	return (mapped_str);
}