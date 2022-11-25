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

static int	get_nb_word(char const *s, char c)
{
	int	i;
	int	nb_mot;
	int	flag;
	int	save;

	i = 0;
	nb_mot = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			flag = 0;
			save = 0;
		}
		if (s[i] != c)
			flag = 1;
		if (flag > save)
		{
			nb_mot++;
			save = 1;
		}
		i++;
	}
	return (nb_mot);
}

static int	get_len_word(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	*get_word(char *dest, const char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
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
	char	**tab;
	size_t	nb_words;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	nb_words = get_nb_word(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	while (j < nb_words && tab)
	{
		while (s[i] == c && s[i])
			i++;
		if (!(tab[j] = (char *)malloc(get_len_word(&s[i], c) + 1)))
			return (free_tab(tab));
		get_word(tab[j], &s[i], get_len_word(&s[i], c));
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
