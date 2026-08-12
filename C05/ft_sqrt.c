/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:03:07 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/28 15:06:54 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	indx;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	indx = 2;
	if (b >= 2)
	{
		while (indx * indx <= b)
		{
			if (indx * indx == b)
				return (indx);
			indx++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_sqrt(2147483647));
	return (0);
}*/
