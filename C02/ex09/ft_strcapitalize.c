/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:09:30 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/27 17:34:21 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || is_alpha(str[i - 1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && is_alpha(str[i - 1]) != 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "a1B2C3D4E5F6G7H8I9J0";

	printf("Original: %s\n", str1);
	printf("Capitalized: %s\n\n", ft_strcapitalize(str1));
	return 0;
}
*/
