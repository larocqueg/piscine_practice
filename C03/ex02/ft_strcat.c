/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:19:54 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/28 19:33:26 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
		i++;
	while(src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return(dest);
}
/*
int	main(void)
{
	char	s1[] = "Happy";
	char	s2[] = " Birthday";

	// Output of original strcat
	printf("strcat: %s\n\n", strcat(s1, s2));
	
	char    s3[] = "Happy";
	char    s4[] = " Birthday";

	// Output of mine function
	printf("ft_strcat: %s\n", ft_strcat(s3, s4));
}
*/
