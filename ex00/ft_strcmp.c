/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:35:53 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/02 07:25:05 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	is_equal, is_equal2;
	char	word[] = {"pampallugues"};
	char	word2[] = {"papallona"};
	char	word3[] = {"papallona"};

	is_equal = ft_strcmp(word, word2);
	is_equal2 = ft_strcmp(word2, word3);
	printf("%d %d", is_equal, is_equal2);
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	equals;

	i = 0;
	equals = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && equals == 0)
	{
		equals = s1[i] - s2[i];
		i ++;
	}
	return (equals);
}
