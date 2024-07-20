/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:04:35 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/20 15:45:49 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	conditions(int i, int j, int x, int y)
{
	if (i == 1 || i == y)
	{
		if (j == 1 || j == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 1 || j == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			conditions(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
