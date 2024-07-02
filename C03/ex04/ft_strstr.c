/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:30:00 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/02 19:17:45 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *s = str;
	char *tf = to_find;

	while(*str)
	{
		s = str;
		tf = to_find;
		while(*s && *tf && (*s == *tf))
		{
			s++;
			tf++;
		}
		if(!*tf)
			return(char *)str;
		str++;
	}
	return(NULL);
}
/*
int main(int argc, char *argv[])
{
	char *a = "Hello, World";
	char *b = argv[1];
	char *result = ft_strstr(a, b);

	printf("string a: %s\n", a);
	printf("string b: %s\n", b);
	if (result)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found!\n");
	return(0);
}
*/
