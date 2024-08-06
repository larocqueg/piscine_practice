/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:35:04 by larocqueg         #+#    #+#             */
/*   Updated: 2024/08/06 19:03:00 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	if (size == 0)
		return (0);
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*result;

	result = (char *)malloc((ft_total_len(size, strs, sep)) + 1);
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		l = 0;
		while (sep[l] && i != size - 1)
			result[k++] = sep[l++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "World", "42"};
	printf("%s\n", ft_strjoin(3, strs, ", "));
}
*/
