/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocubukcu <ocubukcu@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:44:53 by vbicer            #+#    #+#             */
/*   Updated: 2024/11/30 00:08:51 by ocubukcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	a;
	int	i;
	int	result;

	i = 0;
	a = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * a);
}
