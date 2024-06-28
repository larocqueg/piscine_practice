/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:09:50 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/28 18:17:43 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;
	unsigned int	i = 0;

	while(i < n)
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
	char	*st1 = "BBBBZZZZ";
	char	*st2 = "BBBBAAAA";
	unsigned int n = 5;

	printf("strncmp: %i\n\n", strncmp(st1, st2, n));

	printf("ft_strncmp %i\n\n", ft_strncmp(st1, st2, n));
}
*/
