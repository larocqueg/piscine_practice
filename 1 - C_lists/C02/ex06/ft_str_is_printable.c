/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:05:20 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 20:24:01 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= 32 && str[i] <= 126))
			return(0);
		i++;
	}
	return(1);
}
/*
int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int result = ft_str_is_printable(argv[1]);
		if(result == 1)
			printf("Is printable!\n");
		else if(result == 0)
			printf("Not printable!\n");
	}
	else
	{
		printf("Empty string, returning 1!\n");
		return(1);
	}
}
*/
