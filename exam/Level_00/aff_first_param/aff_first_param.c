/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeynepsasmaz <zeynepsasmaz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:03:28 by zeynepsasma       #+#    #+#             */
/*   Updated: 2022/07/11 12:03:29 by zeynepsasma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac > 1)
		while (av[1][++i])
			write(1, &av[1][i], 1);
	write(1, "\n", 1);
	return (0);
}
