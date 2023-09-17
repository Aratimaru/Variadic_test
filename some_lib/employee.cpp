#include "employee.hpp"
#include <iostream>

Employee::Employee() : _name{""}, _id{0}, _salary{0}
{
    std::cout << "Employee()\n";
}

Employee::Employee(std::string name, int id, int salary) : _name{name}, _id{id}, _salary{salary}
{
    std::cout << "Employee(std::string name, int id, int salary)\n";
}