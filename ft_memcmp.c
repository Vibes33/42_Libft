/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:25 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/20 09:10:44 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s10;
	const unsigned char		*s20;
	int						sum;

	s10 = (const unsigned char *)s1;
	s20 = (const unsigned char *)s2;
	sum = 0;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (*s10 != *s20)
		{
			sum = (int)(*s10 - *s20);
			return (sum);
		}
		s10++;
		s20++;
	}
	return (0);
}

//int    main(int argc, char **argv)
//{
//    int        result;
//    size_t    n;
//
//    if (argc != 4)
//    {
//        printf("Usage: %s <string1> <string2> <n>\n", argv[0]);
//        return (1);
//    }
//    n = (size_t)atoi(argv[3]);
//    result = ft_memcmp(argv[1], argv[2], n);
//    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", 
//    argv[1], argv[2], n, result);
//    if (result < 0)
//        printf("→ \"%s\" est inférieure à \"%s\" 
// sur les %zu premiers octets.\n", argv[1], argv[2], n);
//    else if (result > 0)
//        printf("→ \"%s\" est supérieure à \"%s\" sur les 
// %zu premiers octets.\n", argv[1], argv[2], n);
//    else
//        printf("→ Les %zu premiers octets sont identiques.\n", n);
//    return (0);
//}
