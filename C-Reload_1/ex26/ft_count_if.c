/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:55:22 by dboldino          #+#    #+#             */
/*   Updated: 2026/08/18 16:10:21 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}
