/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:43:07 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 17:04:20 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "HELLOOO";
	char	*p;

	ft_strlowcase(str);
	p = ft_strlowcase(str);
	printf("%s\n", p);
	return (0);
}*/
