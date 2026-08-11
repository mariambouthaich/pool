/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 19:20:19 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/16 21:28:18 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	m;
	int	b;

	m = 0;
	while (m <= 98)
	{
		b = m + 1;
		while (b <= 99)
		{
			ft_print_number(m);
			ft_putchar(' ');
			ft_print_number(b);
			if (!(m == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		m++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
