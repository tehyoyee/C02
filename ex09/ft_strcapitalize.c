/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:10:46 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/20 19:29:00 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int	check_up(char c)
{
	if  ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	check_low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
int	check_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
int check_first(char c)
{
	if (check_low(c) || check_up(c) || check_num(c))
		return (0);
	return (1);
}


char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (check_low(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{
		if (check_low(str[i]) && check_first(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[54] = "salut,commenttuvas?42motsquarante-deux;cinquante+et+un";
	ft_strcapitalize(str);
	write(1, str, 54);
}