/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhia-lo <azhia-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:08:38 by azhia-lo          #+#    #+#             */
/*   Updated: 2023/05/12 09:10:24 by azhia-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function takes as a parameter a node and frees the memory of the node's
// content using the function 'del' given as a parameter and free the node.
// The memory of 'next' must not be freed. <- Why tho?

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		if (del != NULL)
		{
			del(lst->content);
			free(lst);
		}
	}
}
