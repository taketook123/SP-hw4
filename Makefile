CC = gcc
CFLAGS = -L.

# Вихідні файли
SOURCES = main.c
TARGET = myprogram

# Список потрібних бібліотек
DEPENDENCIES = libfunclib.a

all: $(TARGET)

$(TARGET): $(SOURCES) $(DEPENDENCIES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES) -lfunclib

libfunclib.a: func.c func.h
	$(CC) $(CFLAGS) -c func.c -o func.o
	ar rcs $@ func.o
	rm func.o
# секція clean для видалення потрібних файлів .o
clean:
	rm -f *.o $(TARGET)

.PHONY: clean
