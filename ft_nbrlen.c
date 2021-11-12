/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:18:30 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/12 16:44:37 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(long long int number)
{
	int				nbrlen;
	long long int	aux;

	nbrlen = 0;
	if (number == 0)
		return (1);
	aux = number;
	while (aux)
	{
		aux /= 10;
		nbrlen++;
	}
	if (number < 0)
		nbrlen++;
	return (nbrlen);
}
