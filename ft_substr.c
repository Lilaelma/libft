/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:43:14 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/25 19:22:32 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s || start < 0 || !len)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start + len > ft_strlen(s))
		len = (unsigned int)ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (i < len && s[start + i])
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
