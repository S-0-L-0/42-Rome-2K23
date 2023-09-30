/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:47:55 by edforte           #+#    #+#             */
/*   Updated: 2023/09/30 11:54:27 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_input(int argc, char **argv)
 {
      int i;
 
      i = 0;
      if (argc != 2)
      {
          write(2, "Input not valid, try again", 26);
          return(-1);
      }
      while (argv[1] != '\0')
      {
          if ((argv[1][i] < '1'|| argv[1][i] > '4') || argv[1][i] == ' ')
          {
              write(2, "Input not valid, try again", 26);
              return(-1);
          }
          i ++;
      }
	  return (0);
  }
