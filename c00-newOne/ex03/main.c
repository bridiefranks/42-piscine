/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:04:11 by bfranks           #+#    #+#             */
/*   Updated: 2021/11/29 12:40:32 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_print_numbers.c"

void ft_print_numbers(void);

int main(void)
{
	ft_print_numbers();
	return(0);
}
// not (void) in the ft_print_numbers(); bit because (supposedly) ft_print_numbers has already been defined as (void) in the prototype bit so it expects nothing to be there and cracks a hissy if there is something there (?) (e.g. if in prototype it says (char c) it will expect a character to be put into the function)
