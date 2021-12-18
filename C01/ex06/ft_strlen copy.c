/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:54:48 by bfranks           #+#    #+#             */
/*   Updated: 2021/12/06 11:57:57 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
/*	printf("%d", i);*/
	return(i);
}
/*
int	main(void)
{
	char	*str;
	str = "gday mate";
	ft_strlen(str);
	return(0);
}*/
/* *str is the pointer pointing at str. If you put ft_strlen(*str) it would count just the g (so i would be 1) as the pointer is just pointing to the first char. But ft_strlen(str) counts the whole string. And you need to declare a pointer pointing to str because otherwise if you just wrote str = "gday mate" it wouldn't know what it was as it would assume it's a single character not an array. Sort of. */
