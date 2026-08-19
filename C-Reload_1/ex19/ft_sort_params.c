/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:33:41 by dboldino          #+#    #+#             */
/*   Updated: 2026/08/18 14:51:21 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	bubble_sort(char **str, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			j++;
		}
		i++;
	}
	if (j != 0)
		bubble_sort(str, size);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		bubble_sort(argv + 1, argc - 1);
		while (i <= argc - 1)
		{
			ft_putstr(argv[i]);
			i++;
		}
		return (0);
	}
	return (0);
}
