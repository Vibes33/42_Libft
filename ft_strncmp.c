/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:21:59 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 09:03:02 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//
//int    main(int argc, char **argv)
//{
//    int        result;
//    size_t    n;
//
//    if (argc != 4)
//    {
//        printf("Usage: %s <string1> <string2> <n>\n", argv[0]);
//        printf("Exemple: %s \"Hello\" \"Hellx\" 5\n", argv[0]);
//        return (1);
//    }
//    n = (size_t)atoi(argv[3]);
//    result = ft_strncmp(argv[1], argv[2], n);
//    printf("Chaîne 1 : \"%s\"\n", argv[1]);
//    printf("Chaîne 2 : \"%s\"\n", argv[2]);
//    printf("Comparaison sur %zu caractères : %d\n", n, result);
//    if (result == 0)
//        printf("→ Les %zu premiers caractères sont identiques.\n", n);
//    else if (result < 0)
//        printf("→ \"%s\" est inférieure à \"%s\".\n", argv[1], argv[2]);
//    else
//        printf("→ \"%s\" est supérieure à \"%s\".\n", argv[1], argv[2]);
//    return (0);
//}
