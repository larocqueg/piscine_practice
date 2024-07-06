/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:56:04 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 20:00:58 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str [i])
	{
		// while argv[i] is lowercase i++, if it is not lowercase it returns 0, else return 1
		if(!(str [i] >= 'a' && str[i] <= 'z'))
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
		int result = ft_str_is_lowercase(argv[1]);
		printf("%i\n", result);
		if(result == 1)
			printf("Is lowercase!\n");
		else
			printf("Not lowercase!\n");
	}
	else
	{
		printf("Empty string, returning 1!");
		return(1);
	}


}
*/
