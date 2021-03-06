/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaske <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:03:26 by tmaske            #+#    #+#             */
/*   Updated: 2017/08/13 18:03:28 by tmaske           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_arrprint(char **arr)
{
	int i;

	i = 0;
	if (arr && *arr)
	{
		while (arr[i])
		{
			ft_putendl(arr[i]);
			i++;
		}
	}
}
