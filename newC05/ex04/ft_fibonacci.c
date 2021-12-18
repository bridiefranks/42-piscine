/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:20:36 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/14 11:08:42 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	index = (ft_fibonacci(index - 1) + ft_fibonacci (index -2));
	return (index);
}
/*
int	main(void)
{
	int	p;
	p = ft_fibonacci(3);
	printf("%d", p);
	return (0);
}*/
