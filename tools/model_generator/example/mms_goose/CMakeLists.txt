cmake_minimum_required(VERSION 3.5)
project(server_example_goose C)

set(CMAKE_C_STANDARD 99)

# Path ke libiec61850 (local folder)
set(LIBIEC61850 "C:/goose/libiec61850")

# Include semua folder header
include_directories(
    ${LIBIEC61850}/src
    ${LIBIEC61850}/src/api
    ${LIBIEC61850}/src/hal
    ${LIBIEC61850}/src/common
    ${LIBIEC61850}/include
    ./libiec61850
)

# Source file contoh
set(SERVER_SOURCES
    server_example_goose.c
    static_model.c
)

# Kumpulkan semua source .c dari libiec61850
file(GLOB_RECURSE LIB_SOURCES
    ${LIBIEC61850}/src/*.c
)

# Buat executable dengan semua sumber
add_executable(server_example_goose
    ${SERVER_SOURCES}
    ${LIB_SOURCES}
)

# Untuk MinGW biasanya harus link pthread
if(MINGW)
    target_link_libraries(server_example_goose pthread)
endif()