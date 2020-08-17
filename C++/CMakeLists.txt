cmake_minimum_required(VERSION 3.12)

project(PROGRAMMING-TEST LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-g -Wall")

set(SOURCE_FILE_NAME
		copy_elision
	)

foreach(ITEM ${SOURCE_FILE_NAME})
	add_executable(${ITEM} ${ITEM}.cpp)
endforeach()
