/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:40:27 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/14 13:30:34 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_base(char *base);
static void	ft_putnbr_mod(unsigned long int num, int len_base, char *base);

int	ft_putnbr_base(unsigned long int nbr, char *base)
{
	int	len_base;
	int	len_nbr;

	if (check_base(base) == 0)
		return (0);
	len_base = ft_strlen(base);
	len_nbr = ft_nbrlen_base(nbr, len_base);
	ft_putnbr_mod(nbr, len_base, base);
	return (len_nbr);
}

static void	ft_putnbr_mod(unsigned long int num, int len_base, char *base)
{
	if (num > ((unsigned long int)len_base - 1))
	{	
		ft_putnbr_mod(num / len_base, len_base, base);
	}
	num = base[num % len_base];
	write (1, &num, 1);
}

static int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}
