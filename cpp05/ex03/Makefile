CC				= c++ 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes -std=c++98 
NAME 			= Intern
SRCS			= srcs/main.cpp srcs/Bureaucrat.cpp srcs/AForm.cpp \
					srcs/ShrubberyCreationForm.cpp srcs/RobotomyRequestForm.cpp \
					srcs/PresidentialPardonForm.cpp srcs/Intern.cpp 
					
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
