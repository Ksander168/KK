#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int value[] = {
        1,
        2,
        3,
        3,
        4,
        5,
        6,
        7,
    };
    int n = sizeof(value) / sizeof(value[0]);
    int elment;
    cout << "Enter the element you want to search: ";
    cin >> elment;
    for (int i = 0; i < n; i++)
    {
        if (value[i] == elment)
        {
            for (int j = i; j < n - 1; j++)
            {
                value[j] = value[j + 1];
            }
            n--;
            i--;
            break;
        }
    }
    cout<<"array deleting emlent is :";
    for(int i = 0; i<n ; i++){
        cout<<value[i]<<" "<<endl;
    }

    return 0;
}