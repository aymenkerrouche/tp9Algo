CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

test: sequentiel.o test.o
	$(CC) $(CFLAGS) -o test sequentiel.o test.o

%.o: %.c annuaire.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o test