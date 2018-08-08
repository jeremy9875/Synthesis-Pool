/*
** requirement.c for requirement in /home/jeremy.elkaim/ADM_palindrome_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 09:41:11 2017 jeremy elkaim
** Last update Fri Jun 16 10:27:17 2017 jeremy elkaim
*/

int	my_factrec_synthesis(int nb)
{
  if (nb > 1 && nb > 0 && nb <= 12)
    {
      return (nb * my_factrec_synthesis(nb - 1));
    }
  else if (nb == 0 || nb == 1)
    return (1);
  else
    return (0);
}

int	my_squareroot_synthesis(int nb)
{
  int	i;

  i = 0;
  if (nb == 1)
    return (1);
  if (nb == 0)
    return (0);
  if (nb < 0 || nb > 2147483647)
    return (-1);
  while (i != (nb / 2))
    {
      if ((i * i) != nb)
	i++;
      if ((i * i) == nb)
	return (i);
    }
  return (-1);
}
