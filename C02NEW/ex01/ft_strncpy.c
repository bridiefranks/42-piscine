/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:38:34 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/08 14:04:38 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include	<stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "";
	char	src[] = "duuude";
	unsigned int	n = 20;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
