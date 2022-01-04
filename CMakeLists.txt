cmake_minimum_required(VERSION 3.20)
project(coffeeException)

set(CMAKE_CXX_STANDARD 14)

add_executable(coffeeException main.cpp CoffeeMachine.cpp CoffeeMachine.h)
