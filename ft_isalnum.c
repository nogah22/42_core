/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:47:50 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/06 10:49:00 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1(TRUE) if c is a digit or an alphabetic letter, otherwise 
// returns 0(FALSE).
// Using previously created functions ft_isalpha and ft_isdigit.

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}

//test ft_isalnum function compare to isalnum function

// int main()
// {
// 	int i = 0;
// 	int j = 0;
// 	while (i < 127)
// 	{
// 		if (ft_isalnum(i) != isalnum(i))
// 		{
// 			printf("ft_isalnum(%d) = %d\n", i, ft_isalnum(i));
// 			printf("isalnum(%d) = %d\n", i, isalnum(i));
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (j == 0)
// 		printf("ft_isalnum is OK\n");
// 	else
// 		printf("ft_isalnum is KO\n");
// 	return (0);
// }