/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:32 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/20 12:34:23 by rydelepi         ###   ########.fr       */
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

// int	 main(int argc, char **argv)
// {
// 	size_t	 n;
// 	char *result;	
// 	(void)argc;
// 	n = (size_t)atoi(argv[3]);
// 	result = ft_memmove(argv[1],argv[2], n );
// 	printf("%s",result);
// } 
