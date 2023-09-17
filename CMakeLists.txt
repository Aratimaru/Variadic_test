cmake_minimum_required(VERSION 3.27.0)
project(cmake_test VERSION 1.0)

add_subdirectory(some_lib)

add_executable(test main.cpp CreateObjectFactory.cpp)

target_link_libraries(test PRIVATE employee_contact)