#include <iostream>

using namespace std;
  #define a cout 
   int main(){
    system("cls");
     int sum =0;
     int cout =0;
     while (true)
     {
        cout << "Enter a number (-1 to exit): ";
        int number;
        cin >> number;
        if (number == 0) break;
        sum += number;
        cout++;
     }
     cout << "Sum: " << sum << endl;
     cout << "Count: " << cout << endl;
    
     
     
    return 0 ;
   }