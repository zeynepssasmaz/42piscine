/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeynepsasmaz <zeynepsasmaz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:38:14 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/08/28 19:16:37 by zeynepsasma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(unsigned int nb)
{
	int	f;
	int	i;

	i = 1;
	f = 1;
	while (i <= nb)
	{
		f *= i++;
    }
	return (f);
}
// int main (void)
// {
//     printf("%i", ft_iterative_factorial(-5));
// }
