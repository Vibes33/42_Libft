/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:58:28 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 08:59:31 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;

	if (!haystack || !needle)
		return (NULL);
	len_n = ft_strlen(needle);
	if (len_n == 0)
		return ((char *)haystack);
	if (len_n > len)
		return (NULL);
	i = 0;
	while (haystack[i] && i + len_n <= len)
	{
		if (ft_strncmp(haystack + i, needle, len_n) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

//int    main(int argc, char **argv)
//{
//   char    *res;
//    char    *haystack;
//    char    *needle;
//    size_t    len;
//
//    if (argc != 4)
//    {
//        printf("Usage: %s <haystack> <needle> <len>\n", argv[0]);
//        printf("Exemple: %s \"Hello World\" \"World\" 11\n", argv[0]);
//        return (1);
//    }
//    haystack = argv[1];
//    needle = argv[2];
//    len = (size_t)atoi(argv[3]);
//    res = ft_strnstr(haystack, needle, len);
//    printf("Texte   : \"%s\"\n", haystack);
//    printf("Recherche de \"%s\" sur %zu caractères...\n", needle, len);
//    if (res)
//        printf("Sous-chaîne trouvée : \"%s\"\n", res);
//    else
//        printf("Sous-chaîne non trouvée.\n");
//    return (0);
//}
