/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:18:48 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 13:17:08 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function applies the function 'f' on each character of the string passed as
// argument, passing its index as first argument. Each character is passed by
// address 'f' to be modified if necessary.

// static void	fkin(unsigned int i, char *c)
// {
// 	ft_putnbr_fd(i, 1);
// 	ft_putendl_fd(c, 1);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// test ft_striteri function works

// int main(void)
// {
// 	char s[] = "hello world";

// 	ft_striteri(s, fkin);
// 	printf("ft_striteri: %s\n", s);
// 	return (0);
// }