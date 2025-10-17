/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:39 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 09:03:56 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s == c)
			words++;
		s++;
	}
	return (words);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc(sizeof(char) * (n + 1));
	if (!s2)
		return (NULL);
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*return_elem(const char *src, int size)
{
	char	*dest;

	dest = malloc((size +1) * sizeof(char));
	dest = ft_strndup(src, (size_t)size - 1);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w_len;
	int		nb_elem;
	char	**sep;

	sep = malloc(count_words(s, c) + 1 * (count_words(s, c) > 0));
	if (sep == NULL)
		return (NULL);
	w_len = 0;
	nb_elem = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			sep[nb_elem] = return_elem(&s[i - w_len + 1], w_len);
			w_len = 0;
			nb_elem++;
		}
		i++;
		w_len++;
	}
	sep[nb_elem] = malloc(sizeof(char));
	sep[nb_elem] = "\0";
	return (sep);
}
