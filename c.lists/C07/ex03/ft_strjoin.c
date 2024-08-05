/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:35:04 by larocqueg         #+#    #+#             */
/*   Updated: 2024/08/05 21:00:26 by larocqueg        ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	j += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(j + 1);
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[k] = strs[i][j];
			j++;
			k++;
		}
		if (strs[i][j] == '\0' && i != size - 1)
		{
			l = 0;
			while (sep[l])
			{
				result[k] = sep[l];
				k++;
				l++;
			}
		}
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
