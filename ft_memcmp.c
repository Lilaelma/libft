/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:37:07 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 20:39:51 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	char_s1;
	unsigned char	char_s2;
	size_t			i;

	i = 0;
	while (i < n)
	{
		char_s1 = *(unsigned char *)s1;
		char_s2 = *(unsigned char *)s2;
		if (char_s1 != char_s2)
			return (char_s1 - char_s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
