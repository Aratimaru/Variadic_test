#pragma once
#include<string>

class Employee{
public:
    Employee();
    Employee(std::string, int, int);

private:
    std::string _name;
    int _id;
    int _salary;
};