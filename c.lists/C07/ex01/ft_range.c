/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:10:22 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/29 18:25:14 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int n;
	int	size;
	int	*dest;

	if (min >= max)
		return (NULL);
	size = (max - min);
	dest = (int *)malloc(4 * size);
	i = 0;
	n = min;
	if (!dest)
		return(NULL);
	while(n < max)
	{
		dest[i] = n;
		n += 1;
		i++; 
	}
	return (dest);
}

/*
int main(void)
{
	int	i;
    int	min;
    int	max;
    int	*range;
	
	min = 0;
	max = 100;
	range = ft_range(min, max);

    if (range != NULL)
    {
        i = 0;
        while (i < (max - min))
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
