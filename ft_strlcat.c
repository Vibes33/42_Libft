/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:19:53 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/20 15:36:20 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	dst_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	i = 0;
	while (s[i] && (i + index + 1) < (dstsize))
	{
		d[index + i] = s[i];
		i++;
	}
	if (i < dstsize)
		d[index + i] = '\0';
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}

// int    main(int argc, char **argv)
// {
//    char    dest[100];
//    char    *src;
//    size_t    size;
//    size_t    ret;
//    (void)argc;
//    ft_strlcpy(dest, argv[1], sizeof(dest));
//    src = argv[2];
//    size = (size_t)atoi(argv[3]);
//    ret = ft_strlcat(dest, src, size);
//    printf("Destination initiale : \"%s\"\n", argv[1]);
//    printf("Source : \"%s\"\n", src);
//    printf("Taille donnée : %zu\n", size);
//    printf("Résultat après ft_strlcat : \"%s\"\n", dest);
//    return (0);
// }
