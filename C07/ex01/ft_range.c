/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:34:59 by scoskun           #+#    #+#             */
/*   Updated: 2021/11/12 00:35:38 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	if (min >= max)
		return (NULL);
	len = (max - min) - 1;
	tab = malloc(len * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i <= len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
