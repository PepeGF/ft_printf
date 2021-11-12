/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:54 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/12 17:15:27 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

static void	ft_place_holder_manager(char c, int *ret_value, va_list args);
static void	ft_place_holder_numeric(char c, int *ret_value, va_list args);
static void	ft_place_holder_alpha(char c, int *ret_value, va_list args);

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

static void	ft_place_holder_manager(char c, int *ret_value, va_list args)
{
	if (c == 'i' || c == 'd' || c == 'u' || c == 'x' || c == 'X')
	{
		ft_place_holder_numeric(c, ret_value, args);
	}
	else
	{
		ft_place_holder_alpha(c, ret_value, args);
	}
}

static void	ft_place_holder_numeric(char c, int *ret_value, va_list args)
{
	if (c == 'i' || c == 'd')
	{
		ft_putnbr(va_arg(args, int));
		*ret_value += ft_nbrlen(va_arg(args, int));
	}
	if (c == 'u')
	{
		ft_putnbr_base(va_arg(args, int), "0123456789");
		*ret_value += ft_nbrlen(va_arg(args, int));
	}
	if (c == 'x')
	{
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
		*ret_value += ft_nbrlen(va_arg(args, int));
	}
	if (c == 'X')
	{
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
		*ret_value += ft_nbrlen(va_arg(args, int));
	}
	if (c == 'p')
	{
		/*no se que hacer*/
		//*ret_value += ni idea
	}
}

static void	ft_place_holder_alpha(char c, int *ret_value, va_list args)
{
	if (c == 'c')
	{
		ft_putchar_fd(c, 1);
		*ret_value += 1;
	}
	else if (c == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		*ret_value += ft_strlen(va_arg(args, char *));
	}
	else/* if (c == '%')*/
	{
		ft_putchar_fd(c, 1);
		*ret_value += 1;
	}
}
/*
int main ()
{
	long int num = 2147483648;

	printf("%p\n",&num);
	printf("%ld\n",num);

	return (0);
}
*/

/*
 * if i -2147483648 2147483647
 * if d -2147483648 2147483647
 *
 */

int main()
{
    int res;
    int res2;
    res = 0;
    res2 = 0;
//  ft_printf("%c", '0');
    printf("\n**********************\n");
    res = ft_printf("%c", '0');
    printf("\nNum de chars: %d\n\n--------> Prueba real:\n", res);
    res2 = printf("%c", '0');
    printf("\nNum de chars printf: %d", res2);
    printf("\n**********************\n");
//  ft_printf(" %c ", '0');
    res = ft_printf(" %c", '0');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c", '0');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
// ft_printf(" %c", '0' - 256);
    res = ft_printf(" %c", '0' - 256);
    printf("\nNum de chars: %d", res);
    res2 = printf("%c", '0' - 256);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
// ft_printf("%c ", '0' + 256);
    res = ft_printf("%c ", '0' + 256);
    printf("\nNum de chars: %d", res);
    res2 = printf("%c", '0' + 256);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '0', 0, '1');
    res = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '0', 0, '1');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", ' ', ' ', ' ');
    res = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '1', '2', '3');
    res = ft_printf(" %c %c %c ", '1', '2', '3');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '1', '2', '3');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '2', '1', 0);
    res = ft_printf(" %c %c %c ", '2', '1', 0);
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '2', '1', 0);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", 0, '1', '2');
    res = ft_printf(" %c %c %c ", 0, '1', '2');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", 0, '1', '2');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
}
