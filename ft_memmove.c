/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:36:38 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/25 19:12:02 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*copy_dest;
	char	*copy_src;

	if (!dest && !src)
		return (0);
	copy_dest = (char *)dest;
	copy_src = (char *)src;
	if (copy_src < copy_dest && copy_dest < copy_src + n)
	{
		n--;
		copy_dest += n;
		copy_src += n;
		while (n-- > 0)
			*copy_dest-- = *copy_src--;
		*copy_dest = *copy_src;
	}
	else
	{
		while (n)
		{
			*copy_dest++ = *copy_src++;
			n--;
		}
	}
	return (dest);
}
