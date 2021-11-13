/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:41:04 by josgarci          #+#    #+#             */
/*   Updated: 2021/11/13 13:07:16 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_nbrlen(long long int number);
int		ft_putchar_fd(char c, int fd);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int num);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
