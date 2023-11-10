cmake_minimum_required(VERSION 3.0)
project(MyProject)

# Создайте каталог для сборки соседним с корневой директорией
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# Указать CMake, где находятся исходные файлы
set(SOURCE_DIR ${CMAKE_SOURCE_DIR})

# Установить каталог сборки
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Добавьте исполняемый файл
add_executable(my_program ${SOURCE_DIR}/main.c)

# Добавьте статическую библиотеку
add_library(func STATIC ${SOURCE_DIR}/func.c)

# Свяжите исполняемый файл с библиотекой
target_link_libraries(my_program func)
