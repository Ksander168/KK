#include <iostream>
using namespace std;

int main()
{

    system("cls");
    int age;
    string nationality;

    cout << "===============[  Register Driver ]==============" << endl;
    cout << "Enter your age :";
    cin >> age;
    cout << "Enter your nationality  :"; 
    cin >> nationality;
    bool condition1 =(age >= 18);
    bool condition2 = !(nationality == "khmer" || nationality =="KHMER");
    if (condition1 && condition2)
    {                                              
        cout << "Your can drive! " << endl;
    }
    else
    {
        cout << "Your cannot drive !" << endl;
    }
    return 0;
}