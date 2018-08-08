/*
** palindrome.h for palindrome in /home/jeremy.elkaim/ADM_palindrome_2016/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun 15 09:03:11 2017 jeremy elkaim
** Last update Sat Jun 17 21:14:33 2017 jeremy elkaim
*/

#ifndef PALINDROME_H_
# define PALINDROME_H_

# define	BADARG		"Error invalid argument \t-h for help\n"
# define	INV_ARG		"invalid argument\n"
# define	NO_SOL		"no solution\n"
# define	HELP		"-h"
# define	ITMAX		"100"
# define	ITMIN		'0'
# define	NUMBER		"-n"
# define	PAL		"-p"
# define	BASE		"-b"
# define	IMIN		"-imin"
# define	IMAX		"-imax"
# define	HELP1		"USAGE\n     "
# define	HELP2		" -n number -p palindrome [-b base] [-imin i]"
# define	HELP3		" [-imax i]\nDESCRIPTION\n\n      -n nb\t"
# define	HELP4		" interger to be transformed (≥ 0)\n"
# define	HELP5		"      -p pal\t palindromic number to be"
# define	HELP6		"obtained (incompatible with the -n option"
# define	HELP7		") (≥ 0)\n\t\t if define, all fitting"
# define	HELP8		" values of n will be output\n      -b base"
# define	HELP9		"\t base in which the procedure will be"
# define	HELP10		"executed (1 < b ≤ 10) [def:   10]\n      "
# define	HELP11		"-imin i\t minimum number of iterations"
# define	HELP12		", included (≥ 0) [def:   0]\n      "
# define	HELP13		"-imax i\t minimum number of iterations"
# define	HELP14		", included (≥ 0) [def:   100]\n"

typedef struct		s_it
{
  int			imax;
  int			imin;
  int			nb;
  int			base;
  int			parser;
  int			min;
  int			palres;
  char			*number;
  char			*revstr;
  int			i;
}			t_it;

int	init_struct(t_it *tag);
void	calc2(t_it *nb);
void	calc2p(t_it *nb);
int	calcn(t_it *nb);
int	calcp(t_it *nb);
void	display(char *str, t_it *nb);
void	verif_temp(t_it *nb, char *str);
int	my_put_nbr_base(int nb, char *base, int size);
char	*printinttostr(int nb, int iter);
int	int_str(int nb);
int	change_base(int nb, int base);
char	*my_revstr(char *str);
int	parser(char **av);
void	parser2(char **av, int i, t_it *tag);
int	no_solution();
int	my_putnbr(int nb);
int	my_exit();
void	help(char **av);
int	number(char **av, int i, t_it *numb);
int	base(char **av, int i, t_it *ta);
int	pal(char **av, int i, t_it *palindrome);
int	imin(char **av, int i, t_it *tag);
int	checkstr(char **tab, int index);
int	imax(char **av, int i, t_it *t);
void	my_putchar(const char c);
void	my_putstr(const char *str);
int	my_strlen(const char *str);
int	my_strcmp(const char *str, const char *cmp);
int	my_strcmp_mod(const char *str, const char *cmp);

#endif /* !PALINDROME_H_ */
