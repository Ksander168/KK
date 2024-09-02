#include <iostream>

using namespace std;
  void menu(){
    cout<<"=====| Piazza Menu |===="<<endl;
    cout<<"1- Buy Pizza"<<endl;
    cout<<"1- Buy Drink "<<endl;
    cout<<"1-Buy Drink and drink "<<endl;
    cout<<"0- Exit  "<<endl;
  }
 
  int main(){
    system ("cls");
    menu();
    cout<<"enter option :";
    int option;
    cin>>option;
    switch (option)
    {
    case 1:{
        cout<<"You bought a pizza "<<endl;
        break;
    }
    case 2:{
        cout<<"You bought a drink "<<endl;   
        break;
    }
    
    case 3:{
        cout<<"You bought Drink and drink "<<endl;
        break;
    }
    case 0:{
        cout<<"good bye "<<endl;
        break;
    }
    
    default:
    cout<<"invalid option "<<endl;

        break;
    }
    return 0;
  }