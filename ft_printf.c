/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:54 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/14 13:18:51 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

static void	ft_place_holder_manager(char c, int *ret_value, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		ret_value;
	int		i;

	ret_value = 0;
	i = 0;
	if (!str)
		return (0);
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
	va_end(args);
	return (ret_value);
}

static void	ft_place_holder_manager(char c, int *rv, va_list a)
{
	if (c == 'i' || c == 'd')
		*rv += ft_putnbr(va_arg(a, int));
	else if (c == 'u')
		*rv += ft_putnbr_base(va_arg(a, unsigned int), "0123456789");
	else if (c == 'x')
		*rv += ft_putnbr_base(va_arg(a, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		*rv += ft_putnbr_base(va_arg(a, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		*rv += write(1, "0x", 2);
		*rv += ft_putnbr_base(va_arg(a, unsigned long int), "0123456789abcdef");
	}
	else if (c == 'c')
		*rv += ft_putchar_fd(va_arg(a, int), 1);
	else if (c == 's')
		*rv += ft_putstr_fd(va_arg(a, char *), 1);
	else
	{
		ft_putchar_fd(c, 1);
		*rv += 1;
	}
}
/*
int main ()
{
	ft_printf("%c", 'Z');
	return (0);
}
*/
