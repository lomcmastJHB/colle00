/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:05:52 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 08:57:28 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int		b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if ((a == 1 && b == 1) || ( a == 1 && b == x))
			{
				ft_putchar('A');
			}
			else if ((a == y  && b == 1) || ( a == y && b == x))
			{
				ft_putchar('C');
			}
			else if (a > 1 && a < y && b > 1 && b < x)
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('B');
			}
			b ++;
		}
		ft_putchar('\n');
		a ++;
	}
}

int main(void);

