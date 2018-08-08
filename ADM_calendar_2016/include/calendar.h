/*
** calendar.h for calendar in /home/jeremy.elkaim/ADM_calendar_2016
**
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
**
** Started on  Thu Jun 29 09:02:13 2017 jeremy elkaim
** Last update Sat Jul  1 09:54:34 2017 jeremy elkaim
*/

#ifndef CALENDAR_H_
# define CALENDAR_H_

# define	HELP	"-h"
# define	STAR	"******************************\n"
# define	CITY	"\ncity: "
# define	POS	"\nposition: "
# define	MEET	"MEETING\ndate: "
# define	PLAC	"\nplace: "
# define	BADARG	"Error bad argument"

typedef struct		s_employee
{
  char			*id;
  char			*lastname;
  char			*firstname;
  char			*poste;
  char			*zipcode;
}			t_employee;

typedef struct		s_meeting
{
  char			*id;
  char			*zip;
  char			*day;
}			t_meeting;

void	test(t_employee *test);
int	new_meet(char *buf, int i);
int	new_meetp2(char *buf, int i, t_meeting *list);
void	new_employ(char *buf, int i);
int	new_employp2(t_employee *list, char *buf, int i, int l);
int	new_employp3(t_employee *list, char *buf, int i);
int	new_employ4(t_employee *list, char *buf, int i);
int	new_employ5(t_employee *list, char *buf, int i);
int	invite(char *buf, int i);
int	parser(char **av);
int	parser1();
int	parser_cal(char *buf);
void	test2(t_meeting *list);
void	help();
void	init_list(t_employee *list);
char	*my_strcpy(const char *src, char *dest);
char	*my_strncpy(const char *src, int i, char *dest);
char	*check_stack(char *buff, char *stack);
char	*my_memset(char *mal, const char c, int size);
char	*read_it();
void	*x_malloc(int size);
int	verif_buff(char *buff);
void	my_putchar(const char c);
void	my_putstr(const char *str);
int	my_strlen(const char *str);
int	my_strcmp(const char *str, const char *cmp);
int	my_strcmp_mod(const char *str, const char *cmp);

#endif /* !PALINDROME_H_ */
