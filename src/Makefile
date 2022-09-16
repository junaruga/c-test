# Follow the make coding style written in the official GNU make document.
# https://www.gnu.org/software/make/manual/make.html
CC = gcc
# CFLAGS: For C only.
# https://stackoverflow.com/questions/495598/
CFLAGS = -g
INCLUDES =
OBJS =
EXE = hello
LIBS =

.c.o :
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(INCLUDES) $< -o $@

.PHONY: all
all : $(EXE)

$(EXE) : $(OBJS) main.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LIBS)

.PHONY: clean
clean :
	rm -f *.o $(EXE)

.PHONY: test
test :
	@echo "Testing..."
	./$(EXE)
