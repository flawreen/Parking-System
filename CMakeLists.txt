cmake_minimum_required(VERSION 3.20)
project(CarRentalSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(CarRentalSystem main.cpp parkingLot.cpp parkingLot.h Client.cpp Client.h)
