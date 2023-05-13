/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:46:57 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 15:59:24 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function outputs the integer 'n' to the given file descriptor.

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd((n + '0'), fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}

//test ft_putnbr_fd function that outputs the integer ’n’ to the given file

// int main(void)
// {
// 	int n = -214748648;
// 	int fd = 1;

// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }