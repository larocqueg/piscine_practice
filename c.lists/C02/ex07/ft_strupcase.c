/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:05:20 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/26 20:35:08 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return(*str);
}
