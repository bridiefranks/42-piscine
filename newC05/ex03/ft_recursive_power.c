/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:00:01 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/14 10:45:56 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb = nb * ft_recursive_power((nb), (power - 1));
	return (nb);
}
/*
int	main(void)
{
	int	p;
	p = ft_recursive_power(2, 3);
	printf("%d", p);
	return (0);
}*/
