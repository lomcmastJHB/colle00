/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:50:18 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 10:49:56 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int		b;
	
	a = 1;
	b = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if ((a == 1 && b == 1) || ( a == y && b == x))
			{
				ft_putchar('/');
			}
			else if ((a == y && b == 1) || ( a == 1 && b == x))
			{
				ft_putchar('\\');
			}
			else if (a > 1 && a < y && b > 1 && b < x)
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('*');
			}
			b ++;
		}
		ft_putchar('\n');
		a ++;
	}
}

int main();
