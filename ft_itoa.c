/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:19:45 by maeskhai          #+#    #+#             */
/*   Updated: 2024/10/28 11:17:16 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		nb;
	int 	len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		len = 1;
		nb = -nb;
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
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
	}
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

#include <stdio.h>

int	main(void)
{	
	printf("%s\n", ft_itoa(-2147483649));
}
