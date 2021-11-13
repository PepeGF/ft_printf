/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:39:35 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/13 16:15:16 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	len;

	len = ft_nbrlen(num);
	if (num == -2147483648)
	{	
		write (1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{	
		ft_putnbr (num / 10);
	}
	num = num % 10 + '0';
	write (1, &num, 1);
	return (len);
}
