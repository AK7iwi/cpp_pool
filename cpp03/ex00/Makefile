CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98
NAME 			= ex02
SRCS			= srcs/main.cpp srcs/Fixed.cpp
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