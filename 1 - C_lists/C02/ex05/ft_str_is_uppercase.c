/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:02:13 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 20:04:15 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str [i])
	{
		// while argv[i] is lowercase i++, if it is not lowercase it returns 0, else return 1
		if(!(str [i] >= 'A' && str[i] <= 'Z'))
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
		int result = ft_str_is_uppercase(argv[1]);
		printf("%i\n", result);
		if(result == 1)
			printf("Is Uppercase!\n");
		else
			printf("Not Uppercase!\n");
	}
	else
	{
		printf("Empty string, returning 1!");
		return(1);
	}


}
*/
