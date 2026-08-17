/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:21:15 by dboldino          #+#    #+#             */
/*   Updated: 2026/08/17 17:14:53 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	test;
	int	mod;

	i = 1;
	if (nb > 0)
	{
		test = nb / i;
		while (test >= i)
		{
			test = nb / i;
			mod = nb % i;
			if (i == test && mod == 0)
				return (i);
			else
				i++;
		}
	}
	return (0);
}
