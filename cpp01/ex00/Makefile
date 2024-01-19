CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98
NAME 			= zombie
SRCS			= srcs/main.cpp srcs/newZombie.cpp srcs/randomChump.cpp srcs/Zombie.cpp 
rhsS 			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(rhsS)
				$(CC) -o $(NAME) $(rhsS) $(CFLAGS)

%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(rhsS)
				 
fclean:			clean
				$(RM) $(NAME)
	
re:				fclean all

.PHONY:			all clean fclean re