/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 12:09:25 by ddelgado          #+#    #+#             */
/*   Updated: 2016/10/18 12:09:27 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sign_calculator(char *str, int *sign)
{
	if (*str == '-')
	{
		*sign = 1;
	}
	else
	{
		*sign = 0;
	}
}

int		holder_calculation(int holder, char *str)
{
	while (*str && *str >= '0' && *str <= '9')
	{
		holder = (holder * 10) + (*str - '0');
		str++;
	}
	return (holder);
}

int		correct_sign_holder(int holder, int sign)
{
	if (sign == 1)
	{
		return (-holder);
	}
	else
	{
		return (holder);
	}
}

int		ft_atoi(char *str)
{
	int holder;
	int	*s;
	int	sign;

	holder = 0;
	sign = 0;
	s = &sign;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
					|| *str == '\r' || *str == '\v')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		sign_calculator(str, s);
		str++;
	}
	if (*str <= '9' && *str >= '0')
	{
		holder = holder_calculation(holder, str);
	}
	holder = correct_sign_holder(holder, sign);
	return (holder);
}
