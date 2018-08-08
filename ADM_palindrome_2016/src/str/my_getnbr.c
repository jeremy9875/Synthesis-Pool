/*
** my_getnbr.c for my_getnbr in /home/jeremy.elkaim/ADM_palindrome_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 13:54:47 2017 jeremy elkaim
** Last update Thu Jun 15 14:32:04 2017 jeremy elkaim
*/

#include "palindrome.h"

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if ((nb / 10) > 0)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + 48);
  return (nb);
}
