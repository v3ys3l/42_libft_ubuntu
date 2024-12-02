/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:44:54 by vbicer            #+#    #+#             */
/*   Updated: 2024/11/30 00:39:25 by vbicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int ip)
{
	if (ip < 127 && ip > 31)
		return (1);
	return (0);
}
