/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfranks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:33:22 by bfranks           #+#    #+#             */
/*   Updated: 2021/11/29 18:09:57 by bfranks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
// the library thing to say that this is where the function ft_putchar can be found.

void	ft_putchar(char c);
// the prototype referring to the file/s being used, and describing which fuctions within that file that will be used therefore which ones it should expect to use...

int	main(void)
{
	ft_putchar('^');
	return(0);
}
// calling on the function ft_putchar, and putting 'a' into it. Return 0 is just good form so that u know that the code has run though all the way to the end properly (and is because it's int main so u need to get an int out).the main is void bc once the main is set as what it is, you don't put anything into it. It's written as ('^') and that's what it is, you don't put anything in.
//
// Whereas in the ft_putchar.c, it's void for the output bc you don't 
