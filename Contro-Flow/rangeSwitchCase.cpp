#include <iostream>

using namespace std;

int main()
{
    system("cls");

    cout << "Enter your score :";
    int score;
    cin >> score;
    switch (score)
    {
    case 90 ...100:
    {
        cout << "Grade A" << endl;
        break;
    }
    case 80 ...89:
    {
        cout << "Grade B" << endl;
        break;
    }
    case 70 ...79:
    {
        cout << "Grade C" << endl;
        break;
    }
    case 60 ...69:
    {
        cout << "Grade D" << endl;
        break;
    }
    case 50 ...59:
    {
        cout << "Grade F" << endl;
        break;
    }
    default:{
        cout << "Invalid score. Please enter a number between 50 and 100." << endl;
        break;
    }
    }
        return 0;
    }