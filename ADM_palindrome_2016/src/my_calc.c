/*
** my_calc.c for my_calc in /home/jeremy.elkaim/ADM_palindrome_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun 16 14:13:31 2017 jeremy elkaim
** Last update Sat Jun 17 22:02:25 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "palindrome.h"

void		calc2(t_it *ap)
{
  ap->i++;
  ap->min++;
}

int		calcn(t_it *ap)
{
  int		len;
  long int	nb;
  char		*str;

  ap->min = ap->imin;
  ap->i = 0;
  nb = change_base(ap->nb, ap->base);
  while (ap->min <= ap->imax)
    {
      len = int_str(nb);
      str = printinttostr(nb, len);
      if (my_strcmp(str, my_revstr(str)) == 0 && ap->i >= ap->imin)
	{
	  display(str, ap);
	  return (0);
	}
      nb = strtol(str, NULL, ap->base)
	+ strtol(my_revstr(str), NULL, ap->base);
      nb = change_base(nb, ap->base);
      calc2(ap);
    }
  my_putstr(NO_SOL);
  verif_temp(ap, str);
  return (0);
}

void		calc2p(t_it *ap)
{
  ap->i++;
  ap->min++;
  ap->nb++;
}

int		calcp(t_it *ap)
{
  int		len;
  long int	nb;
  char		*str;

  ap->nb = 0;
  ap->min = ap->imin;
  ap->i = 0;
  nb = change_base(ap->nb, ap->base);
  while (ap->min <= ap->imax && ap->nb <= ap->palres)
    {
      len = int_str(nb);
      str = printinttostr(nb, len);
      if (ap->nb >= ap->palres)
	{
	  display(str, ap);
	  return (0);
	}
      nb = strtol(str, NULL, ap->base)
	+ strtol(my_revstr(str), NULL, ap->base);
      nb = change_base(nb, ap->base);
      calc2p(ap);
    }
  my_putstr(NO_SOL);
  verif_temp(ap, str);
  return (0);
}

void		display(char *str, t_it *ap)
{
  long int	nomb;

  if (ap->nb == 0)
    my_putchar('0');
  my_put_nbr_base(ap->nb, "0123456789", 0);
  my_putstr(" leads to ");
  nomb = strtol(str, NULL, ap->base);
  my_put_nbr_base(nomb, "0123456789", 0);
  if (nomb == 0)
    my_putchar('0');
  my_putstr(" in ");
  if (my_put_nbr_base(ap->i, "0123456789", 0) == 1)
    my_putchar('0');
  my_putstr(" iteration(s) in base ");
  my_put_nbr_base(ap->base, "0123456789", 0);
  my_putchar('\n');
  verif_temp(ap, str);
}
