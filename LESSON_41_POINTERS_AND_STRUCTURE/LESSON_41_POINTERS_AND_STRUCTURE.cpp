#include <iostream>
using namespace std;
struct stEmplyee
{
    string Name;
    float Salary;
};
int main()
{
    stEmplyee Emplyee, * ptr;
    Emplyee.Name = "adam el fennych";
    Emplyee.Salary = 1000;
    ptr = &Emplyee;
    cout << ptr->Name << endl;
    cout << ptr->Salary << endl;
}