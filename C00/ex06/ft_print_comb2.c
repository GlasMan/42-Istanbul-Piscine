/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:03:54 by scoskun           #+#    #+#             */
/*   Updated: 2021/10/23 12:55:29 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}	

void	ch_to_int(int num, int max)
{
	char	u_i;
	char	d_i;

	if (num <= 9)
	{	
		u_i = num + 48;
		ft_putchar('0', u_i);
	}
	else if (num <= max)
	{
		u_i = (num % 10) + 48;
		d_i = (num / 10) + 48;
		ft_putchar(d_i, u_i);
	}
}

void	cat_int(int fir, int sec)
{
	ch_to_int(fir, 98);
	write(1, " ", 1);
	ch_to_int(sec, 99);
	if (fir != 98 || sec != 99)
	{
		ft_putchar(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{	
		s = f + 1;
		while (s <= 99)
		{
			cat_int(f, s);
			s++;
		}
		f++;
	}	
}
