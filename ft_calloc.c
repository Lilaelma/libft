/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:52:09 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 20:52:15 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	int		nb;

	nb = nmemb * size;
	if (nmemb == 18446744073709551615UL || size == 18446744073709551615UL)
		return (NULL);
	if (!nb && nmemb != nb / size)
		return (NULL);
	array = (char *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return ((void *)array);
}
