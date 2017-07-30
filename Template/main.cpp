#include <iostream>
#include <string>
using namespace std;
template<typename T1,typename T2>
T1 add(T1 value1,T2 value2)
{
    return value1+value2;
}
int main()
{
    cout << add<int,char>(2,'c');

    return 0;
}
