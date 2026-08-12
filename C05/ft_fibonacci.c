/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:19:29 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/28 12:21:25 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
	return (ft_fibonacci(n - 2) + ft_fibonacci(n - 1));
}
/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(10));
}*/
