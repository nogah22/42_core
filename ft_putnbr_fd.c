/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:46:57 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/10 12:56:41 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb;

	nb = ft_itoa(n);
	ft_putendl_fd(nb, fd);
	free(nb);
}

//test ft_putnbr_fd function that outputs the integer ’n’ to the given file

// int main(void)
// {
// 	int n = 42;
// 	int fd = 1;

// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }