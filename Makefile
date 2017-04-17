CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
MT = ./test/main.c
DT = ./test/deposit_test.c
VT = ./test/validation_test.c 
MTO = ./build/main_test.o
DTO = ./build/deposit_test.o
VTO = ./build/validation_test.o
FF = -o

all: dc test

dc: $(DO) $(MO)
	$(CC) $(MO) $(DO) $(FF) ./bin/deposit-calc

test: $(MTO) $(DTO) $(VTO)
	$(CC) $(MTO) $(DTO) $(VTO) $(FF) ./bin/deposit-calc_test

$(DO): $(DC)
	$(CC) -c $(DC) $(FF) $(DO)

$(MO): $(MC)
	$(CC) -c $(MC) $(FF) $(MO)

$(MTO): $(MT)
	$(CC) -c $(MT) $(FF) $(MTO)

$(DTO): $(DT)
	$(CC) -c $(DT) $(FF) $(DTO)

$(VTO): $(VT)
	$(CC) -c $(VT) $(FF) $(VTO)
clean:
	rm ./build/*.o
