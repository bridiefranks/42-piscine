/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:22:41 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/07 10:18:08 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*int	main(void)
{
	char	*str = "";
	int	i;

	ft_str_is_alpha(str);
	i = ft_str_is_alpha(str);
	printf("%d\n", i);
	return (0);
}*/
