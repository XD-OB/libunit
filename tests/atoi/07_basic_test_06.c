/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_basic_test_06.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:05:13 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:05:16 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic7(void)
{
	if (ft_atoi("0") != 0)
		return (-1);
	return (0);
}
