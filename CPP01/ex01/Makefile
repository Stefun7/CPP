NAME = zombieHorde

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp zombieHorde.cpp main.cpp

INC = Zombie.hpp

OBJS = $(SRC:.cpp=.o)

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
