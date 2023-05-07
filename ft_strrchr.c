/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:41 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/07 14:01:59 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;
	char	*tmp;

	pos = NULL;
	tmp = NULL;

	tmp = ft_strchr(s, c);
	while (tmp != NULL)
	{
		pos = tmp;
		tmp = ft_strchr(tmp + 1, c);
	}
	return (pos);
}
// test ft_strrchr function compared to strrchr function

int main(void)
{
	char	str1[] = "Hello World!";
	char	str2[] = "Hello World!";

	printf("ft_strrchr: %s\n", ft_strrchr(str1, 'l'));
	printf("strrchr: %s\n", strrchr(str2, 'l'));
	return (0);
}