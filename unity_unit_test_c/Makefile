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
re: clean all

run:
	./test_add_function


.PHONY: all clean re run