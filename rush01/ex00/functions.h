/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzawko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:36:28 by bzawko            #+#    #+#             */
/*   Updated: 2021/12/05 17:41:36 by bzawko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <stdlib.h>
# include <unistd.h>

int		check_double(int tab[4][4], int pos, int num);

int		check_case(int tab[4][4], int pos, int entry[16]);

int		solve(int tab[4][4], int entry[16], int pos);

void	ft_putnbr(int nb);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		*get_numbers(char *str);

int		error(int ac, char **av);

int		ft_atoi(char *str);

int		ft_strlen(char *str);

#endif
