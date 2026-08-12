/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 12:11:34 by maboutha          #+#    #+#             */
/*   Updated: 2026/07/20 14:16:20 by maboutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	len = 0;
	i = 0 ;
	while (str[i])
	{
		i++;
		len = i;
	}
	if (size == 0)
		return (len);
	i = 0;
	while (str[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
