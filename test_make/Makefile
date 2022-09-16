# Follow the make coding style written in the official GNU make document.
# https://www.gnu.org/software/make/manual/make.html
# https://www.gnu.org/software/make/manual/make.html#Complex-Makefile
CC = gcc
SRCS = main.c
# CFLAGS: For C only.
# https://stackoverflow.com/questions/495598/
CFLAGS =
LDFLAGS = -g
OBJS = $(SRCS:.c=.o)
EXE = hello
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
