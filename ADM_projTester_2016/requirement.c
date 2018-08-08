/*
** requirement.c for requirement in /home/jeremy.elkaim/ADM_projTester_2016
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun 21 09:36:41 2017 jeremy elkaim
** Last update Wed Jun 21 10:24:15 2017 jeremy elkaim
*/

#include <dirent.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void	my_ps_synthesis()
{
  pid_t	child;
  char	*newarg[] = {"", NULL};

  child = fork();
  if (child < 0)
    exit(84);
  if (child == 0)
    {
      execve("/bin/ps", newarg, 0);
      exit(0);
    }
  else
    wait(NULL);
}
