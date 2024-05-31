CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = vetor/vetor.h
OBJ = output/main.o output/vetor/vetor.o
EXECUTABLE = output/main

output/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXECUTABLE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

compilar: 
	if not exist output\vetor (mkdir output\vetor)
	$(MAKE) $(EXECUTABLE)

exec: compilar
	./$(EXECUTABLE)