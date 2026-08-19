/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:37:52 by dboldino          #+#    #+#             */
/*   Updated: 2026/08/18 16:14:53 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	result = malloc((max - min) * sizeof(int));
	if (result == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
