/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:29 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/18 10:49:22 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}

//int    main(int argc, char **argv)
//{
//    char    dest[100];
//    size_t    n;
//
//    if (argc != 3)
//    {
//        printf("Usage: %s <source> <n>\n", argv[0]);
//        return (1);
//    }
//   n = (size_t)atoi(argv[2]);
//    ft_memset(dest, 0, sizeof(dest));
//    ft_memcpy(dest, argv[1], n);
//    printf("Source : \"%s\"\n", argv[1]);
//    printf("Copié  : \"%s\"\n", dest);
//    return (0);
//}
