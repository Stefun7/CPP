NAME = convert

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ScalarConverter.cpp main.cpp

INC = ScalarConverter.hpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re