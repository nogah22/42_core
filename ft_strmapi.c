/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:03:57 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 15:19:23 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function applies the function 'f' on each character of the string passed as
// argument, passing its index as first argument. Each character is passed by
// address 'f' to be modified if necessary.

// static char fkin(unsigned int i, char c)
// {
// 	ft_putnbr_fd(i, 1);
// 	ft_putendl_fd(&c, 1);
// 	c = 'A';
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped_str;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	mapped_str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
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

// test ft_strmapi function works

// int main(void)
// {
// 	char *s = "hello world";
// 	char *s_strmapi = ft_strmapi(s, fkin);

// 	printf("ft_strmapi: %s\n", s_strmapi);
// 	free(s_strmapi);
// 	return (0);
// }