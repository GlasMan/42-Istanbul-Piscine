/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 03:33:34 by scoskun           #+#    #+#             */
/*   Updated: 2021/10/30 04:21:45 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	c;
	int	i;
	int	a;

	a = size - 1;
	c = 0;
	i = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < a)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
