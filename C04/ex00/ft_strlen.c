/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:01:54 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/17 14:05:43 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while (str[i])
	{
		number++;
		i++;
	}
	return (number);
}
