/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:36:08 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/16 14:02:23 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen_base(unsigned long long int number, int len_base)
{
	unsigned long long int	aux;
	int				nbrlen;

	nbrlen = 0;
	if (number == 0)
		return (1);
	aux = number;
	while (aux)
	{
		aux /= len_base;
		nbrlen++;
	}
	return (nbrlen);
}
