/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:35:31 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/20 09:05:15 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c +32;
	}
	return (c);
}

//int    main(int argc, char **argv)
//{
//    int    c;
//
//    if (argc != 2)
//    {
//       printf("Usage: %s <char>\n", argv[0]);
//       printf("Exemple: %s A\n", argv[0]);
//       return (1);
//		}
//   c = (unsigned char)argv[1][0];
//   printf("Avant ft_tolower : '%c' (code ASCII %d)\n", c, c);
//   c = ft_tolower(c);
//   printf("Après  ft_tolower : '%c' (code ASCII %d)\n", c, c);
//   return (0);
//}
