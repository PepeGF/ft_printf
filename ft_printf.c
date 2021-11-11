/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:54 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/11 13:16:00 by josgarci         ###   ########.fr       */
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
			ft_place_holder_manager(str[i], &ret_value);
		}
		i++;
	}

	va_end(args, str);

	return (0);
}

void	ft_palce_holder_manager(char c, *int ret_value/*, va_list args*/)
{
	if (c == 'c')
	{
		ft_putchar_fd(/*va_list*/, 1);
		*ret_value++;
	}
	if (c == 'i')
	{
		ft_putnbr_fd(/*va_list*/, 1);
		*ret_value = len_numero
	}
}

int main ()
{
//	char	letra = 'X';
	char	*str;
	long int num = 2147483648;


	str = malloc (10);

	printf("%p\n",&num);
	printf("%ld\n",num);

	str[0] = 99;
	return (0);
}

/*
 * if i -2147483648 2147483647
 * if d -2147483648 2147483647
 *
 */
