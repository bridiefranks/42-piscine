/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:27:05 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 16:40:17 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str = "99fgif9";
	int	p;

	ft_str_is_numeric(str);
	p = ft_str_is_numeric(str);
	printf("%d\n", p);
	return (0);
}*/
