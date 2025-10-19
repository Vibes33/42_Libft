/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:39:21 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 14:18:44 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int    main(int argc, char **argv)
//{
//    char    buffer[50];
//    size_t    n;
//    size_t    i;
//
//    if (argc != 2)
//    {
//        printf("Usage: %s <number_of_bytes>\n", argv[0]);
//        return (1);
//    }
//    n = (size_t)atoi(argv[1]);
//    if (n > sizeof(buffer))
//    {
//        printf("Max size is %lu bytes.\n", sizeof(buffer));
//        return (1);
//    }
//    memset(buffer, 'A', sizeof(buffer));
//    printf("Avant ft_bzero (premiers 20 octets) :\n");
//    i = 0;
//    while (i < 20)
//    {
//        printf("%c ", buffer[i]);
//        i++;
//    }
 //   printf("\n");
//
//    ft_bzero(buffer, n);
//
//    printf("Après ft_bzero (premiers 20 octets) :\n");
//    i = 0;
//    while (i < 20)
//    {
//        if (buffer[i] == '\0')
//            printf("\\0 ");
//        else
//            printf("%c ", buffer[i]);
//        i++;
//    }
//    printf("\n");
//    return (0);
//}
