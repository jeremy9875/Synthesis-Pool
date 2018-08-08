/*
** main.c for main in /home/jeremy.elkaim/ADM_calendar_2016/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 29 09:04:08 2017 jeremy elkaim
** Last update Fri Jun 30 09:15:23 2017 jeremy elkaim
*/

#include <stdlib.h>
#include "calendar.h"

int	main(int ac, char **av)
{
  if (ac >= 1)
    parser(av);
  else
    {
      my_putstr(BADARG);
      exit(84);
    }
  return (0);
}
