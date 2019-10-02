cmake_minimum_required(VERSION 3.14)
project(LoanCalc)

set(CMAKE_CXX_STANDARD 14)

add_executable(LoanCalc main.cpp Mortgage.cpp Mortgage.h)