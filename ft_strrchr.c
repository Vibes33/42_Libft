/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:59:51 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 14:11:35 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

//int    main(int argc, char **argv)
//{
//    char    *res;
//    char    *str;
//    char    c;
//
//    if (argc != 3)
//   {
//        printf("Usage: %s <string> <char>\n", argv[0]);
//     printf("Exemple: %s \"Hello World\" o\n", argv[0]);
//        return (1);
//    }
//    str = argv[1];
//    c = argv[2][0];
//    res = ft_strrchr(str, c);
//    if (res)
//        printf("Dernière occurrence de '%c' trouvée : \"%s\"\n", c, res);
//    else
//        printf("Caractère '%c' non trouvé dans \"%s\".\n", c, str);
//    return (0);
//}
