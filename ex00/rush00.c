/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomcmast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:26:29 by lomcmast          #+#    #+#             */
/*   Updated: 2020/07/15 12:00:13 by lomcmast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void    rush(int x, int y)
{
    int     a;
    int     b;

    a = 1;
    while (a <= y)
    {
		b = 1;
        while (b <= x)
        {
            if ((a == 1 || a == y) && (b == 1 || b == x))
            {
				ft_putchar('o');
			}
			else if ((a > 1 || a < y ) && ( b == 1 || b == x))
			{
				ft_putchar('|');
			}
			else if ((a == 1 || a == y) && ( b > 1 || b < x))
			{
				ft_putchar('-');
			}
			else if ((a != 1 || a != y) && ( b != 1 || b != y))
			{
				ft_putchar(' ');
			}
			b ++;
		}
		ft_putchar('\n');
		a ++;
	}
}           

int		main(void);
