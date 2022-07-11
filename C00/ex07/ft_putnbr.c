/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:23 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/02/15 18:03:48 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char charcik)
{
	write(1, &charcik, 1);
}

void	ft_putnbr(int sayi)
{
	if (sayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		sayi = 147483648;
	}
	if (sayi < 0)
	{
		ft_putchar('-');
		sayi *= -1;
	}
	if (sayi < 10)
	{
		ft_putchar(sayi + 48);
		return ;
	}
	else
		ft_putnbr(sayi / 10);
	ft_putnbr(sayi % 10);
}
