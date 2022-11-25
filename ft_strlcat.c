/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:40:27 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 22:40:32 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_index;

	dst_len = 0;
	src_index = 0;
	if (!size)
		return (ft_strlen(src));
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_index] && dst_len + src_index < size - 1)
	{
		dst[dst_len + src_index] = src[src_index];
		src_index++;
	}
	if (dst_len < size)
		dst[dst_len + src_index] = '\0';
	return (dst_len + ft_strlen(src));
}
