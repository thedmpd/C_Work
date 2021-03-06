/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 10:37:00 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 10:37:03 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strclen(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == c)
			return (i + 1);
		i++;
		str++;
	}
	return (i);
}
