/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:16:13 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/13 12:32:47 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	a = nb - 1;
	while (a > 0)
	{
		nb = nb * a;
		a--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	p;
	
	p = ft_iterative_factorial(9);
	printf("%d", p);
	return (0);
}*/
