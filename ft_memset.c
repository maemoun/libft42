/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:00:45 by maeskhai          #+#    #+#             */
/*   Updated: 2024/10/24 14:52:04 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pt;
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	pt = (unsigned char)b;
	while (i < len)
	{
		*(pt + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
