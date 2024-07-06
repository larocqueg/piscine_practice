/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:55:42 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 19:55:45 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return(0);
		i++;
	}
	return(1);
			

}
/*
int	main(int argc, char *argv[])
{
	int	result;
	
	if(argc == 2)
	{
		result = ft_str_is_numeric(argv[1]);
		printf("%i\n", result);
		if(result == 1)
			printf("Is numerical!\n");
		if(result == 0)
			printf("Not numerical!\n");
	}
	else
		printf("String is empty, returning (1)!");
		return(1);
	
	
}
*/
