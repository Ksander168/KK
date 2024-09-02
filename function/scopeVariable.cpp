#include <iostream>

using namespace std;
 int age =123;
int main()
{
    system("cls");
    string name = "Alex";
    {
        string name = "jonh";
        cout << name << endl;
        int age = 29;
    }
    cout << "Your name is " << name << endl;
    // cout<<"Your age is :"<<age<<endl; // Error
    cout<<age;

    return 0;
}