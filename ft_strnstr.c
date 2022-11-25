/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:58:05 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 20:58:16 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s1, const char *s2)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s2);
	i = 0;
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		flag;
	size_t	len_s2;
	size_t	i;

	len_s2 = ft_strlen(s2);
	if (len_s2 == 0)
		return ((char *)s1);
	i = 0;
	flag = 0;
	while (i < len && s1[i])
	{
		if (i + len_s2 - 1 == len)
			break ;
		if (s1[i] == s2[0])
		{
			flag = ft_check(&s1[i], s2);
			if (flag)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
