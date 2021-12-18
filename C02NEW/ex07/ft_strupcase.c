/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:08:27 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 16:19:44 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "aofdi";
	char	*p;

	ft_strupcase(str);
	p = ft_strupcase(str);
	printf("%s\n", p);
	return (0);
}*/
