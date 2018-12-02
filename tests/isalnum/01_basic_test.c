/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:33:30 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:33:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalnum_basic1(void)
{
	int		c;

	c = -1;
	while (c < 150)
	{
		if (ft_isalnum(c) != test_isalnum(c))
			return (-1);
		c++;
	}
	return (0);
}
