#include <employee.hpp>

class CreateObjectFactory{
public:
    template <typename T1>
    static T1* CreateObject()
    {
        return new T1();
    }

    template <typename T1, typename... T2>
    static T1 *CreateObject(T2... args)
    {
        return new T1(args...);
    }
};