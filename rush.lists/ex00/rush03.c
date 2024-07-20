/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:20:11 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/20 16:23:17 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int j, int x)
{
	if (j == 1)
		ft_putchar('A');
	if (j == x && j != 1)
		ft_putchar('C');
	else if (j > 1 && j < x)
		ft_putchar('B');
}

void	middle_rows(int j, int x)
{
	if (j == 1)
		ft_putchar('B');
	if (j == x && j != 1)
		ft_putchar('B');
	else if (j != 1 && j != x)
		ft_putchar(' ');
}

void	last_row(int j, int x)
{
	if (j == 1)
		ft_putchar('A');
	if (j == x && j != 1)
		ft_putchar('C');
	else if (j != 1 && j != x)
		ft_putchar('B');
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
			if (i == 1)
				first_row(j, x);
			if (i == y && i != 1)
				last_row(j, x);
			else if (i > 1 && i < y)
				middle_rows(j, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
