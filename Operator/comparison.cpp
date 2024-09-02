#include <iostream>

using namespace std;
//  int main(){
//     system("cls");
//     int age , result;

//     cout<<"Enter your age :";
//     cin>>age;
//     if(age >=18){
//         cout<<"your can vote"<<endl;
//     }else{
//         cout<<"your canot vote :"<<endl;
//         cout<<"Your need be be :"<<18-age<<endl;
//     }
//     return 0;
//  }

int main()
{
    system("cls");
    cout << "==============[ Menu]===============" << endl;
    cout << " 1. Add to product " << endl;
    cout << " 2. remove Product " << endl;
    cout << " 3. veiw product " << endl;
    cout << " 0. exit " << endl;
    cout << "-----------------------------------" << endl;
    int option;
    cout << "Enter an option :";
    cin >> option;
    if (option != 0)
    {
        cout << "The system contunue working!" << endl;
    }
    else
    {
        cout << "The system will exit!" << endl;
    }
    return 0;
}