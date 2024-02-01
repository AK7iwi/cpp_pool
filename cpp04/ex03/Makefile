CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98 
NAME 			= ex02
SRCS			= srcs/main.cpp srcs/AMateria.cpp srcs/ICharacter.cpp srcs/IMateriaSource.cpp 
					srcs/Character.cpp srcs/Cure.cpp srcs/Ice.cpp srcs/MateriaSource.cpp \
OBJS 			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)
				 
fclean:			clean
				$(RM) $(NAME)
	
re:				fclean all

.PHONY:			all clean fclean re