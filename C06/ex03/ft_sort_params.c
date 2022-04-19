/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 04:58:53 by scoskun           #+#    #+#             */
/*   Updated: 2021/11/06 01:49:53 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	comp_arg(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (comp_arg(av[i], av[j]) < 0)
			{
				swap(&av[i], &av[j]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
		put_str(av[i++]);
	return (0);
}
