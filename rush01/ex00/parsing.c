/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzawko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:32:57 by bzawko            #+#    #+#             */
/*   Updated: 2021/12/05 18:21:19 by bzawko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	error(int argc, char **argv)
{
	char	*str;
	int		i;
	int		space;

	space = 1;
	str = argv[1];
	i = -1;
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	while (str[++i])
	{
		if (!(str[i] >= '1' && str[i] <= '4') && str[i] != ' ')
			return (1);
		if ((str[i] >= '1' && str[i] <= '4') && space < 0)
			return (1);
		space *= -1;
	}
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
