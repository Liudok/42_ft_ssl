/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberezyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:40:03 by lberezyn          #+#    #+#             */
/*   Updated: 2017/11/01 13:41:27 by lberezyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (nb <= 0 || nb > 2147395600)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		c = c + i;
		if (c * c > nb)
		{
			return (0);
		}
		else if (c * c == nb)
		{
			return (c);
		}
	}
	return (c);
}
