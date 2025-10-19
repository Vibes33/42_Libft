/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:48:36 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/18 10:48:55 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
	return (NULL);
}

//int    main(int argc, char **argv)
//{
//   char    *res;
//char    *str;
//   char    c;
//
//    if (argc != 3)
//    {
//        printf("Usage: %s <string> <char>\n", argv[0]);
//        printf("Exemple: %s \"Hello World\" o\n", argv[0]);
//        return (1);
//    }
//    str = argv[1];
//   c = argv[2][0];
//   res = ft_strchr(str, c);
//    if (res)
//        printf("Caractère '%c' trouvé : \"%s\"\n", c, res);
//    else
//        printf("Caractère '%c' non trouvé dans \"%s\".\n", c, str);
//    return (0);
//}
