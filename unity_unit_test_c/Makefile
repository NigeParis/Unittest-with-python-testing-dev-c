#######################################################################
## ARGUMENTS

NAME=test_add_function
CFLAGS=-L
LIB=-l unity



###############################################################################
## RULES

all:
	cc $(NAME).c $(CFLAGS). $(LIB) -o $(NAME)
clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf libunity.a
	make clean -C ../unity/

re: clean all

run:
	./test_add_function

lib:
	make -C ../unity/		


.PHONY: all clean fclean re run lib