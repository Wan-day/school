/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:52:22 by dboldino          #+#    #+#             */
/*   Updated: 2026/08/17 17:15:25 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void	sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 0;
	if (argc > 2)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				j++;
			}
			i++;
		}
	}
	if (j != 0)
		sort_params(argc, argv);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
	{
		sort_params(argc, argv);
		while (i < argc)
		{
			while (*argv[i])
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
