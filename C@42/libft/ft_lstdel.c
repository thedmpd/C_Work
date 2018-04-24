/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 22:03:15 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/20 22:03:17 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_lst;
	t_list	*temp;

	next_lst = *alst;
	while (next_lst)
	{
		temp = next_lst->next;
		del((next_lst->content), (next_lst->content_size));
		free(next_lst);
		next_lst = temp;
	}
	*alst = NULL;
}
