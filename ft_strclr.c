/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:55:20 by tnamo             #+#    #+#             */
/*   Updated: 2018/06/13 17:32:32 by tnamo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int i;

	i = 0;
	if (!(s))
		return ;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
