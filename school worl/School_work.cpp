#include <iostream>

using namespace std;

void USDToKHR()
{
    float USD;
    cout << "Enter the amount of USD to convert to KHR: ";
    cin >> USD;
    float KHR = USD * 4000;
    cout << "Amount in KHR: " << KHR << " Riel" << endl;
}
void KHRtoUSD()
{
    float KHR;
    cout << "Enter the amount of KHR to convert to USD: ";
    cin >> KHR;
    float USD = KHR / 4000;
    cout << "Amount in USD: " << USD << " $" << endl;
}
void EURtoUSD()
{
    float EUR;
    cout << "Enter the amount of EUR to convert to USD: ";
    cin >> EUR;
    float USD = EUR * 1.2;
    cout << "Amount in USD: " << USD << "EUR" << endl;
}
void menuFunction()
{
    cout << "=======Currency Converter:======" << endl;
    cout << "1. USD to KHR" << endl;
    cout << "2. KHR to USD" << endl;
    cout << "3. EUR to USD" << endl;
    cout << "Enter your choice: ហើ ";
}
int main()
{
    system("cls");
    menuFunction();
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        USDToKHR();
        break;
    }
    case 2:
    {
        KHRtoUSD();
        break;
    }
    case 3:
    {
        EURtoUSD();
        break;
    }

    default:
        cout << "Invalid choice! Please enter a number between 1 and 3." << endl;
    }
    return 0;
}
