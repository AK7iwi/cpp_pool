CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98
NAME 			= phonebook
SRCS			= srcs/Contact.cpp srcs/PhoneBook.cpp srcs/main.cpp
OBJS 			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

%.o: %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				$(RM) $(NAME)
	
re:				fclean all

.PHONY:			all clean fclean re