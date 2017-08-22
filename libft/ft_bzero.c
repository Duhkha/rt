/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 12:55:57 by syoung            #+#    #+#             */
/*   Updated: 2017/05/31 13:18:41 by syoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void			ft_bzero(void *b, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)b)[i] = 0;
		i++;
	}
}
