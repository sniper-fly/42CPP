RESET=\e[0m
GREEN=\e[32m

all:
	make -C ex00
	make -C ex01
	make -C ex02

fclean:
	make -C ex00 fclean
	make -C ex01 fclean
	make -C ex02 fclean

exec:
	@printf "${GREEN}------------ex00--------------${RESET}\n"
	./ex00/a.out
	@printf "${GREEN}------------ex01--------------${RESET}\n"
	./ex01/a.out
	@printf "${GREEN}------------ex02--------------${RESET}\n"
	./ex02/a.out

.PHONY: all fclean
