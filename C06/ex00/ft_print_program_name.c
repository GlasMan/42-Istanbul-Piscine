/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:24:22 by malasaha          #+#    #+#             */
/*   Updated: 2021/11/05 23:26:15 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc > 0)
	{
		while (argv[0][count] != '\0')
		{
			write(1, &argv[0][count], 1);
			count++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
