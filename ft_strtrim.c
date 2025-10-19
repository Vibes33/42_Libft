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

//Cette fonction teste si un caractère c appartient à set.
static int    is_in_set(char c, const char *set)
{
    size_t k;

    if (!set)
        return (0);
    k = 0;
    while (set[k])
    {
        if (set[k] == c)
            return (1);
        k++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    start;
    size_t    end;
    size_t    len;
    char    *out;

    if (!s1)
        return (NULL);
    // Trouver le premier index non set
    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    // Si tout est mangé → chaîne vide
    if (s1[start] == '\0')
        return (ft_strdup(""));
    // Trouver le dernier index non set
    end = ft_strlen(s1) - 1;
    while (end > start && is_in_set(s1[end], set))
        end--;
    // Longueur utile = end - start + 1
    len = end - start + 1;
    out = (char *)malloc(len + 1);
    if (!out)
        return (NULL);
    ft_strlcpy(out, s1 + start, len + 1);
    return (out);
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
