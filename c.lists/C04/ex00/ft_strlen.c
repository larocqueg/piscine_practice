/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:38:07 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/06 21:44:55 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	int	len;
	char*	a = NULL;

	a = argv[1];
	len = ft_strlen (a);

	printf("Lenght of str is: %i\n", len);

	return (0);
}
*/
