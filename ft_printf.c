/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:54 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/11 15:36:11 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	int ret_value;

	ret_value = 0;
	va_list = args;

	va_start(args, str);
	
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			ret_value++;
		}
		else 
		{
			i++;
			ft_place_holder_manager(str[i], &ret_value, args);
		}
		i++;
	}

	va_end(args, str);

	return (ret_value);
}

void	ft_palce_holder_manager(char c, *int ret_value, va_list args)
{
	if (c == 'c')
	{
		ft_putchar_fd(/*va_list*/, 1);
		*ret_value++;
	}
	if (c == '%')
	{
		ft_putchar_fd(&c, 1);
		*ret_value++;
	}
	if (c == 's')
	{
		ft_putstr_fd(/*va_list*/, 1);
		*ret_value += ft_strlen(/*va_list*/);
	}
	if (c == 'i' || c == 'd')
	{
		ft_putnbr_fd(/*va_list*/, 1);
		*ret_value += ft_nbrlen(/*va_list*/)
	}

}

int main ()
{
	long int num = 2147483648;

	printf("%p\n",&num);
	printf("%ld\n",num);

	return (0);
}

/*
 * if i -2147483648 2147483647
 * if d -2147483648 2147483647
 *
 */
