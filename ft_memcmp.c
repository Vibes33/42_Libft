/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:25 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/18 09:12:04 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s10;
	const unsigned char	*s20;
	int					sum;

	s10 = (const unsigned char)s1;
	s20 = (const void char)s2;
	sum = 0;
	sum += *s10++ - *s20++;
	return (sum);
}
