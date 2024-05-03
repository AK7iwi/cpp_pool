CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98 
NAME 			= PmergeMe
SRCS			= srcs/main.cpp srcs/PmergeMe.cpp srcs/print.cpp

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