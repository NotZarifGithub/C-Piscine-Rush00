/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:20:09 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/04/28 15:24:00 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
