/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:04:31 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/28 15:57:39 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	result = 0;

	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			return(result);
		}
		i++;
	}
	return(0);
}
/*
int	main(void)
{
	char	*st1 = "AAA";
	char	*st2 = "AAAA";

	printf("strcmp: %i\n\n", strcmp(st1, st2));

	printf("ft_strcmp %i\n\n", ft_strcmp(st1, st2));
}
*/
