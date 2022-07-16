.PHONY : all clean fclean re

NAME		=	program

CCPP		=	g++
CFLAGSCPP	=	-Wall -Werror -Wextra

RM			=	rm -rf

SRCS		=	main.cpp \
				Person.cpp \
				Student.cpp

OBJS		=	$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CCPP) $(CFLAGSCPP) $(OBJS) -o $(NAME)
	@echo "Program compile"

clean :
	@$(RM) $(OBJS)
	@echo "delete objs file"

fclean : clean
	@$(RM) $(NAME)
	@echo "delete exe file"

re : fclean