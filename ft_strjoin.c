/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:34:30 by maeskhai          #+#    #+#             */
/*   Updated: 2024/10/30 08:14:01 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int j;
	int len;
	char *str;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++; 
	}
	str[j] = '\0';
	return (str);
}
