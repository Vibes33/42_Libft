/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:00:34 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/18 10:48:19 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_begin(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	int			in_set;

	in_set = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i++;
	}
	return ((char *) s1 + i);
}

static char	*find_end(char const *s1, char const *set, char const *begin)
{
	size_t		i;
	size_t		j;
	int			in_set;

	in_set = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1 + i >= begin)
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i--;
	}
	if (s1 + i < begin)
		return ((char *) begin);
	return ((char *) s1 + i);
}

static char	*fill_str(char const *begin, char const *end)
{
	char		*new;
	size_t		i;

	new = malloc(sizeof(char) * (end - begin + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (begin + i <= end)
	{
		new[i] = begin[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*new;

	begin = find_begin(s1, set);
	end = find_end(s1, set, s1);
	if (!s1[0] || end < begin)
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
	}
	else
		new = fill_str(begin, end);
	if (!new)
		return (NULL);
	return (new);
}

//int    main(int argc, char **argv)
//{
//    char    *res;
//
//    if (argc != 3)
//    {
//        printf("Usage: %s <string> <set>\n", argv[0]);
//        printf("Exemple: %s \"--Hello--\" \"-\"\n", argv[0]);
//        return (1);
//    }
//    res = ft_strtrim(argv[1], argv[2]);
//    if (!res)
//    {
//        printf("Erreur d'allocation mémoire.\n");
//        return (1);
//    }
//    printf("Chaîne originale : \"%s\"\n", argv[1]);
//    printf("Caractères à retirer : \"%s\"\n", argv[2]);
//    printf("Résultat après ft_strtrim : \"%s\"\n", res);
//    free(res);
//    return (0);
//}
