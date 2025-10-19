/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:43:48 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 09:03:35 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//static void    to_uppercase(unsigned int i, char *c)
//{
//    (void)i;
//    if (*c >= 'a' && *c <= 'z')
//        *c -= 32;
//}

//int    main(int argc, char **argv)
//{
//    char    *str;
//
 //   if (argc != 2)
 //   {
 //       printf("Usage: %s <string>\n", argv[0]);
//        printf("Exemple: %s \"Hello 42!\"\n", argv[0]);
//        return (1);
//    }
//    str = ft_strdup(argv[1]);
//    if (!str)
//    {
//        printf("Erreur d'allocation mémoire.\n");
//        return (1);
//    }
//    printf("Avant ft_striteri : %s\n", str);
//    ft_striteri(str, to_uppercase);
//    printf("Après ft_striteri : %s\n", str);
//    free(str);
//    return (0);
//}
