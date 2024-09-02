#include <iostream>
using namespace std;
int main()
{// current working 
    system("cls");
    // // 1. variable declaraition 
    // int age;
    // float salary;
    // string name;
    // // 2. Assing value to variable
    // age = 25;
    // salary = 1000.5;
    // name = "Bro korn";
    // // 3. Intialize variable
    // string className = "C++ Programming";
    // cout << "age :" << age << endl;
    // cout << "salary :" << salary << endl;
    // cout << "name :" << name << endl;
    // cout<<"classNmae :"<<className<<endl;
    
    //Input and Output Stream 
    string name;
    int age ;
    string ClassName ;
    cout<<"Your age :";
    cin>>age ;
    cin.ignore();
    cout<<"Enter your name :";
    getline(cin,name);
    // cin>>name;
    cout<<"Your Class Name is :";
    cin>>ClassName;
    cout<<"=======information student======="<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"class :"<<ClassName<<endl;
    
    return 0;
}