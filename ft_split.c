/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:02:35 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/05 18:02:48 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*new_word(char const *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		else
			s++;
	}
	return (count);
}

static void	freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_split2(char const *s, char c, int i)
{
	char	**strs;

	strs = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = new_word(s, c);
			if (!strs[i])
			{
				freestr(strs);
				return (NULL);
			}
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	strs = ft_split2(s, c, i);
	return (strs);
}
