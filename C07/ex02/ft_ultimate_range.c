/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:37:48 by scoskun           #+#    #+#             */
/*   Updated: 2021/11/12 00:38:30 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = (max - min) - 1;
	tab = malloc(len * sizeof(int));
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i <= len)
	{
		tab[i] = min + i;
		i++;
	}
	return (len + 1);
}
