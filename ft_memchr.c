/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:30:59 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 22:31:03 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*copy_s;
	size_t	i;

	copy_s = (char *)s;
	i = 0;
	while (i < n)
	{
		if (copy_s[i] == (char)c)
			return ((void *)copy_s + i);
		i++;
	}
	return (NULL);
}
