CC = gcc
SRCS = main.c
CFLAGS = -O0 -g3 -ggdb3 -gdwarf-5
LDFLAGS =
OBJS = $(SRCS:.c=.o)
EXE = main
LIBS =

.c.o :
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

.PHONY: all
all : $(EXE)

$(EXE) : $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@ $(LIBS)

.PHONY: clean
clean :
	rm -f *.o $(EXE)

.PHONY: test
test :
	@echo "Testing..."
	./$(EXE)
