/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:34:33 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 21:38:42 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	flag;

	res = 0;
	while ((nptr[0] == ' ' || nptr[0] == '\f' || nptr[0] == '\v' || \
			nptr[0] == '\r' || nptr[0] == '\t' || nptr[0] == '\n') && \
			nptr[0] != '\0')
		nptr++;
	flag = 1;
	if (nptr[0] == '-')
		flag = -1;
	if (nptr[0] == '-' || nptr[0] == '+')
		nptr++;
	i = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	res *= flag;
	return (res);
}
