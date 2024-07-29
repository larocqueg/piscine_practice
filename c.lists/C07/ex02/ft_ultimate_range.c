/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:09:15 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/29 20:17:53 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	dest = (int *)malloc(4 * size);
	if (!dest)
	{
		*range = NULL;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
int main(void)
{
    int min = 0;
    int max = 10000;
    int *range;
    int size;
    int i = 0;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    if (range != NULL)
    {
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }
    else
    {
        printf("Range is NULL\n");
    }

    return 0;
}
*/
