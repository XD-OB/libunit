/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:34:17 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:34:20 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalpha_basic1(void)
{
	int		c;

	c = -1;
	while (c < 150)
	{
		if (ft_isalpha(c) != test_isalpha(c))
			return (-1);
		c++;
	}
	return (0);
}
