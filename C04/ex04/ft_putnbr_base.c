/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:54:02 by scoskun           #+#    #+#             */
/*   Updated: 2021/11/06 18:43:14 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	err_check(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	n;
	int				last;

	if (err_check(base) == 1)
	{
		size = len_base(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			n = nbr * -1;
		}
		else
			n = nbr;
		if (n >= size)
			ft_putnbr_base(n / size, base);
		last = base[n % size];
		write(1, &last, 1);
	}
}
