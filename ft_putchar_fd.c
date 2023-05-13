/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:23:26 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 16:02:44 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function outputs the character 'c' to the given file descriptor.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
