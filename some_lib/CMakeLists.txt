add_library(
    employee_contact STATIC
    employee.hpp
    employee.cpp
    )

target_include_directories(employee_contact PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_definitions(employee_contact PUBLIC EMPLOYEE_CONTACT_VERSION=1)