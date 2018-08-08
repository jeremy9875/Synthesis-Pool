##
## Makefile for Makefile in /home/jeremy.elkaim/ADM_palindrome_2016
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Thu Jun 15 09:03:52 2017 jeremy elkaim
## Last update Sat Jun 17 17:14:59 2017 jeremy elkaim
##

NAME		=	palindrome

CC		=	gcc

SRC		=	src/main.c			\
			src/parser.c			\
			src/number.c			\
			src/struct.c			\
			src/checkstr.c			\
			src/my_calc.c			\
			src/str/my_put_nbr_base.c	\
			src/str/my_revstr.c		\
			src/str/my_getnbr.c		\
			src/str/write.c

OBJ		=	$(SRC:.c=.o)

TMP		=	$(SRC:.c=.c~)

RM		=	rm -rf

CFLAGS		+=	-Wall -Wextra -Werror

CPPFLAGS	+=	-I ./include/

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ)

clean		:
			$(RM) $(OBJ)
			$(RM) $(TMP)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
