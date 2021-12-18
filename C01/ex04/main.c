/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:41:43 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/02 19:12:19 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int	*a, int	*b);

int	main(void)
{
	int	a;
	int	b;
	
	a = 50;
	b = 4;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d", a, b);
	return(0);
}
