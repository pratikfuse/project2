/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmanandh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:07:37 by pmanandh          #+#    #+#             */
/*   Updated: 2026/07/14 14:07:39 by pmanandh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

void ft_print_comb(void);

// This function returns the comibnation of 3 digits from 000 to 999


void ft_print_comb(void)
{
	int first_digit, second_digit, third_digit;


	first_digit = 0;
	second_digit = 0;
	third_digit = 0;

	
	int print_combinations(bool should_print)
	{
		// at least two of the digits are same (repeated), we dont't print this combination
		if(first_digit == second_digit || second_digit == third_digit || first_digit == third_digit) print_combinations(false);

		if(should_print)
		{
			printf("%d%d%d", first_digit, second_digit, third_digit);
		}

		if(first_digit == 9 && second_digit == 9 && third_digit == 9)
		{
			return -1;
		}
		else
		{
			print_combinations(true);
		}
	}

	print_combinations(false);
}

/**
 * The numbers need to loop from 000 to 999
 * But, the same number does not have to repeat
 * maybe three different values, first_digit, second_digit, third_digit
 * 
 * All digits start from 0, first the third digit should increment by one, then second, then third digit
 */

int main(void)
{
	ft_print_comb();
	return (0);
}
