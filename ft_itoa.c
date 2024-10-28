/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:19:45 by maeskhai          #+#    #+#             */
/*   Updated: 2024/10/28 14:57:59 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_itoa(int n)
{
	char	*str;
	long		nb;
	int 	len;

	str = NULL;
	len = 0;
	nb = n;
	if (nb == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		nb = 147483648;
		while (n > 1)
		{
			str[len] = (nb % 10) + 48;
			nb = nb / 10;
			len--;
		}
		return (str);
	}
	else if (nb < 0)
	{
		len = 1;
		nb = nb * -1;
	}
	else if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (nb == 0)
		str[len] = '0';
	while (n > 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}
