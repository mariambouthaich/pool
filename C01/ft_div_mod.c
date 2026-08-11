/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:52:01 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/19 10:45:54 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int main(void)
{
    int div;
    int mod;

    ft_div_mod(20, 5, &div, &mod);

    printf("Division = %d\n", div);   // 3
    printf("Reste = %d\n", mod);      // 2

    return (0);
}*/
