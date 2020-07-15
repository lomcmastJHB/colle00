/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:54:08 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 08:53:54 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int 	b;

	a = 1;
	b = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if (a == 1 && (b == 1 || b == x ))
			{
				ft_putchar('A');
			}
			else if(a == y && ( b == 1 || b == x))
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

