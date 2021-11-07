NAME = a.out
SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

CXX = clang++
ifdef debug
CXX = g++
endif

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98 -pedantic
ifdef sanitize
CXXFLAGS += -fsanitize=address
endif

ifdef my_test
CXXFLAGS += -Dmy_test=1
endif

ifdef cmp_with_list
CXXFLAGS += -Dcmp_with_list
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) mutant_stack.log list.log

fclean: clean
	rm -rf $(NAME)

re: fclean all

execute:
	./$(NAME)

test: all execute fclean

compare_with_list:
	make re
	./a.out > mutant_stack.log
	make re cmp_with_list=1
	./a.out > list.log
	diff mutant_stack.log list.log

.PHONY: all clean fclean re test execute
