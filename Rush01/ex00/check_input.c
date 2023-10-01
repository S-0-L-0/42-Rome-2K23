/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:47:55 by edforte           #+#    #+#             */
/*   Updated: 2023/09/30 15:39:03 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int print_error()
{
	write(2, "Input not valid, try again\n", 27);
	return(0);

}

int ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}
int check_input(int argc, char **argv)
 {
      int i;
	  int valid;

	  valid = 1; 
      i = 0;
      if (argc != 2 || ft_len(argv[1]) != 31)
		 valid = 0;
      while (argv[1][i] != '\0')
      {
          if ((i % 2 == 0 && ! (argv[1][i] >= '1' && argv[1][i] <= '4')))
			  valid = 0;
		  else if ((i % 2 == 1 && ! (argv[1][i] == ' ')))
			  valid = 0;
          i ++;
      }
	  if (valid == 0)
		  print_error();
	  return(valid);
  }

int get_rules1(char *str)
{
	int rules[16];
	int i;

	i = 0;
	while (*str)
	{
		rules[i] = *str - '0';
		i ++;
		str = str + 2;
	}
	return (0);
}
