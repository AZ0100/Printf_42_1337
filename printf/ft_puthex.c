/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azourgan <azourgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:27:34 by azourgan          #+#    #+#             */
/*   Updated: 2022/11/15 18:59:48 by azourgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long i, char *hex, int *size)
{
	if (i > 15)
	{
		ft_puthex(i / 16, hex, size);
		ft_putchar(hex[i % 16], size);
	}
	else
		ft_putchar(hex[i % 16], size);
}
