CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

test: sequentiel.o hachage.o test.o
	$(CC) $(CFLAGS) -o test sequentiel.o hachage.o test.o

%.o: %.c annuaire.h
	$(CC) $(CFLAGS) -c $<

clean:
	del /Q *.o test.exe 2>NUL || exit 0