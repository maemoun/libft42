/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:34:30 by maeskhai          #+#    #+#             */
/*   Updated: 2024/11/04 13:30:22 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char *str, char const *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		str[i] = s2[i];
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1 && s2)
		return ((char *)s2);
	if (!s2 && s1)
		return ((char *)s1);
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[j] = s1[i++];
		j++;
	}
	ft_join(str + j, s2);
	str[len] = '\0';
	return (str);
}
