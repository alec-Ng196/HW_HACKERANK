cmake_minimum_required(VERSION 3.28)
project(LTNC_W3)

set(CMAKE_CXX_STANDARD 17)

add_executable(LTNC_W3 Caesar_cipher.cpp
        CamelCase.cpp
        cmake-build-debug/Hacker_in_Str.cpp
        Staircase.cpp
        Time_conversion.cpp
        Strings.cpp)
