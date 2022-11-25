/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:42:57 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/25 18:02:24 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s, char const *set)
{
	int		start;
	int		end;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s[start]))
		start++;
	end = ft_strlen(s) - 1;
	while (ft_strchr(set, s[end]))
		end--;
	return (ft_substr(s, start, end - start + 1));
}
