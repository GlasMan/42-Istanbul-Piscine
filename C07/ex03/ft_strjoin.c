/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:43:54 by scoskun           #+#    #+#             */
/*   Updated: 2021/11/12 00:45:19 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		index;
	int		count;
	int		index_i;

	new = malloc(sizeof(strs));
	index = 0;
	count = 0;
	while (index < size)
	{
		index_i = 0;
		while (strs[index][index_i] != '\0')
		{
			new[count++] = strs[index][index_i++];
		}
		index_i = 0;
		while (sep[index_i] != '\0' && index < size - 1)
		{
			new[count++] = sep[index_i++];
		}
		index++;
	}
	new[count] = '\0';
	return (new);
}
