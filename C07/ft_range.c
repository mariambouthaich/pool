/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:35:47 by maboutha          #+#    #+#             */
/*   Updated: 2026/08/02 15:36:16 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min ;
		min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>
int main (void)
{
	int min = 1;
	int max = 7;
	int *tab;
	tab = ft_range(min, max);
	int i=0;
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free (tab);
	return(0);
}*/
