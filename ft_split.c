/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:38:51 by aclarenn          #+#    #+#             */
/*   Updated: 2022/11/19 22:38:53 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	nbr_word(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == c && i != 0 && str[i - 1] != c)
			len++;
		i++;
	}
	if (i != 0 && str[i - 1] != c)
		len++;
	return (len);
}

static char	**ft_protec(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((nbr_word((char *)s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (res);
}

static char	*ft_strdup_split(const char *str, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof (char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = ft_protec(s, c);
	if (!res)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		res[j] = ft_strdup_split(&s[i], c);
		if (!res[j])
			return (free_tab(res));
		while (s[i] != c && s[i])
			i++;
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	res[nbr_word((char *)s, c)] = 0;
	return (res);
}
