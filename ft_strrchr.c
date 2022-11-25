/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:42:43 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 22:42:46 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		flag;

	str = NULL;
	flag = 1;
	if (s[0] == '\0' && c == 0)
	{
		str = (char *)s;
		return (str);
	}
	while (*s || flag)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
		flag = 0;
	}
	if ((char)c == '\0')
		str = (char *)s;
	return (str);
}
