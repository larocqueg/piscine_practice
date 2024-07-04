/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:54:31 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 19:54:34 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str [i])
	{
		// while argv[i] is alphabetical i++, if it is not alphabetical, return 0, else return 1
		if(!(str [i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
		int result = ft_str_is_alpha(argv[1]);
		printf("%i\n", result);
		if(result == 1)
			printf("Is Alphabetical!\n");
		else
			printf("Not alphabetical!\n");
	}
	else
		return(1);
	
}
*/

