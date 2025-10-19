/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:15:57 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/17 09:03:31 by rydelepi         ###   ########.fr       */
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

//int    main(int argc, char **argv)
//{
//    char    *res;
//
//   if (argc != 3)
//    {
//        printf("Usage: %s <string1> <string2>\n", argv[0]);
//        printf("Exemple: %s \"Hello \" \"World!\"\n", argv[0]);
//        return (1);
//    }
//    res = ft_strjoin(argv[1], argv[2]);
//    if (!res)
//    {
//        printf("Erreur d'allocation mémoire.\n");
//        return (1);
//    }
//    printf("Chaîne 1 : \"%s\"\n", argv[1]);
//    printf("Chaîne 2 : \"%s\"\n", argv[2]);
//    printf("Résultat : \"%s\"\n", res);
//    free(res);
//    return (0);
//}
