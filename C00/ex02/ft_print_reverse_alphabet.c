/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:03:54 by scoskun           #+#    #+#             */
/*   Updated: 2021/10/21 01:25:11 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ter_alf;

	ter_alf = 'z';
	while (ter_alf >= 'a')
	{
		write(1, &ter_alf, 1);
		ter_alf--;
	}	
}
