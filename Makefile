CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
FF = -o

all: $(DO) $(MO)
	$(CC) $(MO) $(DO) $(FF) ./bin/deposit-calc

$(DO): $(DC)
	$(CC) -c $(DC) $(FF) $(DO)

$(MO): $(MC)
	$(CC) -c $(MC) $(FF) $(MO)

clean:
	rm ./build/*.o
