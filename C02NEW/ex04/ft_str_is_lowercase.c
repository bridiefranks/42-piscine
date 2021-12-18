/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:36:07 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 12:01:47 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	ft_str_is_lowercase(str);
	p = ft_str_is_lowercase(str);
	printf("%d", p);
	return (0);
}*/
