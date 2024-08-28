/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzir-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:49:28 by malzir-d          #+#    #+#             */
/*   Updated: 2024/08/28 14:35:31 by malzir-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i >= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
