CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
NAME 			= megaphone
SRCS			= megaphone.cpp

rhsS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(rhsS)
				$(CC) -o $(NAME) $(rhsS) $(CFLAGS)
		
%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:			
				$(RM) $(rhsS)
				 
fclean:	 		clean
				$(RM) $(NAME)
	
re:				fclean all

.PHONY:			all clean fclean re