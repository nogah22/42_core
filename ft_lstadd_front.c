/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:46:22 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 07:39:41 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function adds the node 'new' at the beginning of the list.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL || new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
