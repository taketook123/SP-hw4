cmake_minimum_required(VERSION 3.0)
project(MyProject)

# Створення каталогу
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# Вказуємо де знаходяться вихідні файли
set(SOURCE_DIR ${CMAKE_SOURCE_DIR})

# Всановлюємо директорію для збирання
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Додаємо виконуваний файл
add_executable(my_program ${SOURCE_DIR}/main.c)

# Додати статичну бібліотеку
add_library(func STATIC ${SOURCE_DIR}/func.c)

# Звязати виконуваний файл з бібліотекою
target_link_libraries(my_program func)
