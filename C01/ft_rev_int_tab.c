/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 09:58:08 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/19 10:23:39 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	mar;

	i = 0;
	while (i < size / 2)
	{
		mar = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = mar;
		i++;
	}
}
/*#include <stdio.h>

int main(void)
{
	int i;
	i = 0;
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(arr, size);
	while ( i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return(0);
}*/
