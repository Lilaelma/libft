/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:42:01 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 22:42:03 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	char_s1;
	unsigned char	char_s2;
	size_t			i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		char_s1 = s1[i];
		char_s2 = s2[i];
		if (char_s1 != char_s2)
			return (char_s1 - char_s2);
		i++;
	}
	return (0);
}
