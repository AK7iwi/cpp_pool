CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
CPPFLAGS        = -std=c++98
NAME 	= megaphone
SRCS	= megaphone.cpp

OBJS 	= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(SRCS) $(CFLAGS) $(CPPFLAGS)
		
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)
				 
fclean:	 		clean
				$(RM) $(NAME)
	
re:				fclean all

.PHONY:			all clean fclean re