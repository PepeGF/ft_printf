/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:54 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/09 18:22:29 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char	letra = 'X';
	char	*str;

	str = malloc (10);

	printf("%c",letra);

	str[0] = 99;
	return (0);
}
