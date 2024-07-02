/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:53:33 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/02 16:20:49 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while(dest[i] != '\0')
		i++;
	
	j = 0;
	while(src[j] != '\0' && j < nb)
		dest[i++] = src[j++];
	
	dest[i] = '\0';
	return(dest);
}
/*
int main(void)
{
	
	char source[10] = "DEF";
	char dest[10] = "ABC";

	printf("%s\n", ft_strncat(dest, source, 3));
	return(0);
}
*/
