/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:59:26 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/02/27 19:59:31 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
