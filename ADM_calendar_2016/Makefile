##
## Makefile for Makefile in /home/jeremy.elkaim/ADM_calendar_2016
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Thu Jun 29 09:03:11 2017 jeremy elkaim
## Last update Fri Jun 30 15:11:55 2017 jeremy elkaim
##

NAME		=	calendar

CC		=	gcc

SRC		=	src/main.c			\
			src/parser.c			\
			src/str/write.c			\
			src/str/strcpy.c		\
			src/gnl.c			\
			src/parser_next.c		\
			src/algo.c

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
