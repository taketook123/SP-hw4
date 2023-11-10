CC = gcc
CFLAGS = -L.

# Исходные файлы
SOURCES = main.c
# Выходной исполняемый файл
TARGET = myprogram

# Список зависимостей
DEPENDENCIES = libfunclib.a

all: $(TARGET)

$(TARGET): $(SOURCES) $(DEPENDENCIES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES) -lfunclib

libfunclib.a: func.c func.h
	$(CC) $(CFLAGS) -c func.c -o func.o
	ar rcs $@ func.o
	rm func.o

clean:
	rm -f *.o $(TARGET)

.PHONY: clean
