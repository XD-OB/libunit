/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_basic_test_10.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:06:42 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:06:44 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic11(void)
{
	if (ft_atoi("054854") != 54854)
		return (-1);
	return (0);
}
