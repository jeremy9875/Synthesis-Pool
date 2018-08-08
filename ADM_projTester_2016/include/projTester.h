/*
** projTester.h for projTester in /home/jeremy.elkaim/ADM_projTester_2016/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun 21 09:31:41 2017 jeremy elkaim
** Last update Fri Jun 23 17:15:42 2017 jeremy elkaim
*/

#ifndef PROJTESTER_H_
# define PROJTESTER_H_

# define	ARROW		"-----"
# define	FOLDER		"/\n"

typedef struct		s_it
{
  int			dir;
  int			i;
  int			arrow;
}			t_it;

void	my_putchar(char c);
int	my_strcmp_bis(const char *str, const char *cmp);
int	tree_tab4(int l);
char	*strchange(char *path);
int	tree_tab5(int l, int tmp);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	parser(char **tab);
int	search_bft(char *str);
int	check_tdf(char *str);
int	tree_tab(char *path, t_it *tag, int i, int tmp);
void	tree_tab2(t_it *tag, char *path);
int	my_strcmp(const char *str, const char *cmp);
int	my_strcmp_mod(const char *str, const char *cmp);
char	*my_strcpy(char *dest, char *src);

#endif /* !PROJTESTER_H_ */
