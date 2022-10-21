cmake_minimum_required(VERSION 3.23)
project(AccountNumberSplit)

set(CMAKE_CXX_STANDARD 14)

add_executable(AccountNumberSplit main.cpp AccountNumber.cpp AccountNumber.h)
