/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:24:10 by cmoreau           #+#    #+#             */
/*   Updated: 2022/07/19 11:10:09 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (++row <= y)
	{
		col = 1;
		if (row == 1 || row == y)
		{
			ft_putchar('A');
			while (++col < x)
				ft_putchar('B');
			if (x > 1)
				ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
			while (++col < x)
				ft_putchar(' ');
			if (x > 1)
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
