/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:18:30 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/11 13:44:11 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
