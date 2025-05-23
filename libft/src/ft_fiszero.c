/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fiszero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 16:53:04 by pbillett          #+#    #+#             */
/*   Updated: 2017/11/05 16:43:01 by pbillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_fiszero(double value)
{
	if (value > -0.001 && value < 0.001)
		return (1);
	return (0);
}
