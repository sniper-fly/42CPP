
NAME = crappy

CXX	= clang++
CXXFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

SRCS = ./UserInterface.cpp ./main.cpp ./Phonebook.cpp 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) 

re: fclean all

test: all
	./$(NAME)

autogen:
	bash ./.autogen.sh

.PHONY: all clean fclean re test autogen
