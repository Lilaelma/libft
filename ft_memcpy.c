/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:47:39 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 20:51:40 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*copy_dest;
	unsigned char	*copy_src;
	size_t			i;

	copy_dest = (unsigned char *)dest;
	copy_src = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		*copy_dest++ = *copy_src++;
		i++;
	}
	return (dest);
}
