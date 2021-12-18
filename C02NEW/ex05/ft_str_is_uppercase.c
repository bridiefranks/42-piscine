/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:03:06 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 12:21:17 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z') || (str[i] < 'A'))
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
	char	*str = "";
	int	p;

	ft_str_is_uppercase(str);
	p = ft_str_is_uppercase(str);
	printf("%d", p);
	return (0);
}*/
