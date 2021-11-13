/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:39:35 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/13 14:19:00 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{	
		len += write (1, "-2147483648", 11);
		return len;
	}
	if (num < 0)
	{
		len += write (1, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{	
		ft_putnbr (num / 10);
	}
	num = num % 10 + '0';
	len += write (1, &num, 1);
	return (len);
}
