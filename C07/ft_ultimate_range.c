/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:36:51 by maboutha          #+#    #+#             */
/*   Updated: 2026/08/02 15:51:56 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i ;
		i++;
	}
	return (size);
}

/*int main (void)
{
	int min = -1;
	int max = -8;
	int *tab;
	int ret;
	ret = ft_ultimate_range(&tab,min, max);
	if (ret == -1)
		return (-1);
	int i=0;
	while (i < ret)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free (tab);
	return(0);
}*/
