/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:14:06 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 13:51:46 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	total;
	int	sign;
	int	i;

	sign = 1;
	total = 0;
	i = 0;
	while (ft_whitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (sign * total);
}

//int    main(int argc, char **argv)
//{
//    int    result;
//
//    if (argc != 2)
//    {
//        printf("Usage: %s <string_to_convert>\n", argv[0]);
//       return (1);
//    }
//    result = ft_atoi(argv[1]);
//    printf("ft_atoi(\"%s\") = %d\n", argv[1], result);
//    return (0);
//}
