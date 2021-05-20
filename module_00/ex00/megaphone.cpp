/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keuclide <keuclide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:06:22 by keuclide          #+#    #+#             */
/*   Updated: 2021/05/20 09:12:49 by keuclide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	do_uppercase(char *some_string);
int		is_letter(char some_char);

int	main(int ac, const char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		do_uppercase((char *)av[i]);
		std::cout << av[i];
		if (i + 1 == ac)
			std::cout << "\n";
	}
	return (0);
}

int		is_letter(char some_char)
{
	if (some_char > 96 && some_char < 123)
		return (1);
	return (0);
}

void	do_uppercase(char *some_string)
{
	for (int i = 0; some_string[i] != '\0'; i++)
	{
		if (is_letter(some_string[i]))
			some_string[i] = some_string[i] - 32;
	}
}