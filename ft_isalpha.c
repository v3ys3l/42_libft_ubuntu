/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:44:53 by vbicer            #+#    #+#             */
/*   Updated: 2024/11/30 00:39:29 by vbicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int alpha)
{
	if ((alpha <= 'Z' && alpha >= 'A') || (alpha <= 'z' && alpha >= 'a'))
		return (1);
	return (0);
}
