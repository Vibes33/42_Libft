/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:15:57 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/20 13:24:32 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_lngt(int size, char **strs, char *sep)
{
	int	total_lgt;
	int	i;

	total_lgt = 0;
	i = 0;
	while (i < size)
	{
		total_lgt += ft_strlen(strs[i]);
		i++;
	}
	total_lgt += ft_strlen(sep) * (size - 1);
	return (total_lgt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = total_lngt(size, strs, sep);
	result = malloc(sizeof(char) *(len + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// int main (void)
// {
// 	char *strs[4]= {"hello", "hi", "안녕하세요", "halo"};
// 	char *sep = "-";
// 	char *result;

// 	result = ft_strjoin(4,strs,sep);
// printf("%s",result);
// free(result);
// 	return(0);
// }
