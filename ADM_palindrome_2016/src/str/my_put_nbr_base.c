/*
** my_put_nbr_base.c for my_put_nbr_base in /home/jeremy.elkaim/ADM_palindrome_2016/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 16 21:42:52 2017 jeremy elkaim
** Last update Sat Jun 17 10:44:31 2017 jeremy elkaim
*/

#include "palindrome.h"

int	my_put_nbr_base(int nb, char *base, int size)
{
  int	cell;

  size = my_strlen(base);
  cell = nb % size;
  if (nb < 0)
    my_putchar('-');
  cell = nb % size;
  if (nb == 0)
    return (1);
  my_put_nbr_base(nb / size, base, size);
  if (nb > 0)
    my_putchar(base[cell]);
  if (nb < 0)
    my_putchar(base[-1 * (cell)]);
  return (0);
}

int	change_base(int nb, int base)
{
  int	i;
  int	res;

  res = 0;
  i = 1;
  while (nb > 0)
    {
      res = res + (nb % base) * i;
      nb = nb / base;
      i *= 10;
    }
  return (res);
}
