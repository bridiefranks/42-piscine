/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:33:15 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/13 17:58:21 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	solution;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	solution = nb;
	while (power > 1)
	{
		solution = solution * nb;
		power--;
	}
	return (solution);
}
/*
int	main(void)
{
	int	p;

	p = ft_iterative_power(-5, 3);
	printf("%d", p);
	return (0);
}*/
