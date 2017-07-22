/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpacaly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:01:05 by tpacaly           #+#    #+#             */
/*   Updated: 2016/11/04 09:13:55 by tpacaly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	int				d;

	c = (unsigned char *)s;
	d = 0;
	while (n != 0)
	{
		c[d] = '\0';
		n--;
		d++;
	}
}
