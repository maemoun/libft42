/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:00:45 by maeskhai          #+#    #+#             */
/*   Updated: 2024/10/24 12:17:19 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *pt = b;
	size_t	i;

	i = 0;
	if (!b)
		return(NULL);
	while(i < len)
	{
		*(pt + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
