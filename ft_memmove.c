/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:32 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 13:39:59 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (s < d)
	{
		while (n--)
		{
			*d = *s;
		}
	}
	else
	{
		*d++ = *s++;
	}
	return (dest);
}

//int    main(int argc, char **argv)
//{
//    char    buffer[100];
//    size_t    n;
//    size_t    src_index;
//    size_t    dest_index;
//
//   if (argc != 4)
//    {
//        printf("Usage: %s <string> <src_index> <dest_index>\n", argv[0]);
//        printf("Exemple: %s \"HelloWorld\" 0 5\n", argv[0]);
//        return (1);
//    }
//
//    ft_strlcpy(buffer, argv[1], sizeof(buffer));
//    src_index = (size_t)atoi(argv[2]);
//    dest_index = (size_t)atoi(argv[3]);
//    n = ft_strlen(buffer) - src_index;
//
//    printf("Avant ft_memmove : %s\n", buffer);
//    ft_memmove(buffer + dest_index, buffer + src_index, n);
//    printf("Après ft_memmove : %s\n", buffer);
//
//    return (0);
//}
