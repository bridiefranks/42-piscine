/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:02:23 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/02 17:42:29 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_div_mod.c"
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 25;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d\n", div, mod);
	return(0);
}
