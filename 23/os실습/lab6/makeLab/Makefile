CC = gcc
CFLAGS = -W -Wall
TARGET = shop
OBJECT = main.o menu.o guest.o
all : $(TARGET)
$(TARGET) : $(OBJECT)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o shop