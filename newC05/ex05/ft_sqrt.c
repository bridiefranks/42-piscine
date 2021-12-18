/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:09:45 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/14 20:04:47 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	odd;
	int	nextsqr;
	int	count;

	if (nb < 0)
		return (0);
	nextsqr = nb;
	odd = 1;
	count = 0;
	while (nextsqr > 0)
	{
		nextsqr = nextsqr - odd;
		odd = odd + 2;
		count++;
	}
	if ((nextsqr) == 0)
		return (count);
	else
		return (0);
}
/*
int	main(void)
{
	int	p;
	p = ft_sqrt(2);
	printf("%d", p);
	return (0);
}*/
