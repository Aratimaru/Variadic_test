#include "CreateObjectFactory.hpp"

void main(){
    int *p1 = CreateObjectFactory::CreateObject<int>(5) ;
    
    std::string *s = CreateObjectFactory::CreateObject<std::string>() ;//Default construction

    Employee *emp = CreateObjectFactory::CreateObject<Employee>("Bob", 101, 1000);
}
