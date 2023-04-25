TARGET := display
SRC := $(TARGET).c
OBJ := $(TARGET).o

CFLAGS := -g -Wall
CC := gcc 

all : $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -c $(SRC)
	$(CC) -shared $(SRC) -fPIC -o libdlink.so
	

clean:
	rm -f test2.o test2



	




