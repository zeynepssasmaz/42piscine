/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsasmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:46:34 by zsasmaz           #+#    #+#             */
/*   Updated: 2022/03/02 22:47:41 by zsasmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*int	main(void)
{
	int *range;
	int	*bange;
	int	i;

	i = 0;
	printf("Range uzunluk: %d\n", ft_ultimate_range(&range, 5, 10));
	printf("Bange uzunluk: %d\n", ft_ultimate_range(&bange, 10, 15));
	while (i < 5)
	{
		printf("\n range %d.indisi  %d\n",i , range[i]);
		printf("\n bange %d.indisi %d\n",i , bange[i]);
		i++;
	}
	return (0);
}
*/
