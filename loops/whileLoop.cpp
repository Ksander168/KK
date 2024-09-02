#include <iostream>

using namespace std;
void menu()
{
    cout << "============|menu|============" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Exit" << endl;
}
float add(int a, int b)
{
    return a + b;
}
float sub(int a, int b)
{
    return a - b;
}
float mult(int a, int b)
{
    return a * b;
}
int main()
{
    system("cls");
    // int n =0;
    // while (n != 10)
    // {
    //     n++;
    //     cout<<n<<endl;
    // }
    while (true)
    {
        menu();
        int choise;
        cout << "Enter your choice: ";
        cin >> choise;
         system("cls");
        switch (choise)
        {
        case 1:
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Addition: " << add(a, b) << endl;
            break;
        }
        case 2:
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Subtraction: " << sub(a, b) << endl;
            break;
        }
        case 3:
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Multiplication: " << mult(a, b) << endl;
            break;
        }
            default:
            
                cout << "Invalid choice. Please try again." << endl;
            
         
        }
             if (choise == 4)
        {
            break;
        }
        
    }
        return 0;
}