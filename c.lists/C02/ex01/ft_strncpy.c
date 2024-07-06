/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:35:31 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/24 21:00:35 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	while(*c)
	{
		write(1, c, 1);
		c++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int n;

	n = 13;
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	ft_putstr("\n");
	return(0);
}
*/
