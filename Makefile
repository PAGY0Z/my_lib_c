##
## EPITECH PROJECT, 2023
## B-CPE-200-RUN-2-1-corewar-pierre-alexandre.grosset
## File description:
## Global Makefile (responsible of the compilation of the whole project)
##

LIB	=	lib/my

TESTS	=	tests/

CFLAGS	=	-W -Wall -Wextra -Werror

TFLAGS	=	--coverage -lcriterion

INCLUDE_TESTS	=	-I./lib/my/includes \
					-I./tests/includes

TESTS_LIB_SRC_FILES	=	$(shell find $(LIB) -name '*.c')

TESTS_SRC_FILES	=	$(shell find $(TESTS) -name '*.c')

TESTS_SRC_GLOBALS	=	$(TESTS_LIB_SRC_FILES) \
						$(TESTS_SRC_FILES)

all:
	make -C $(LIB)

tests_run:
	$(CC) -o unit_test $(TESTS_SRC_GLOBALS) $(INCLUDE_TESTS) $(TFLAGS) $(CFLAGS)
	./unit_test && gcovr -e tests/ && gcovr -e tests/ -b

tests_clean:
	rm -f unit_test *.gcda *.gcno

tests_re : tests_clean tests_run

clean:
	make -C $(LIB) clean

fclean: clean tests_clean
	make -C $(LIB) fclean
	@rm -rf *.cor

re: fclean all
