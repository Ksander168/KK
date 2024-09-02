#include <iostream>

using namespace std;

 void menu(){
    cout<<"=====options====="<<endl;
    cout<<"1- login "<<endl;
    cout<<"2- register "<<endl;
    cout<<"3- exit "<<endl;
    cout<<"================="<<endl;
    cout<<"Enter your choice :";
 }
 string Username;
 string Password;
 void logo(){
    cout<<"======================"<<endl;
    cout<<"|      Login System      |"<<endl;
    cout<<"======================"<<endl;
    string username , password;
    cout<<"Enter your name :";
    cin.ignore();
    getline(cin,username);
    cout<<"Enter your password :";
    cin>>password;
    while(username != Username || password != Password){
        cout<<"invalid your name or password"<<endl;
        cout<<"Enter your name :";
        cin>>username;
        cout<<"Enter your password :";
        cin>>password;
    }
    
 }
  void Register(){
    cout<<"======================"<<endl;
    cout<<"===Register System===="<<endl;
    cout<<"======================"<<endl;
    cout<<"Enter your name :";
    cin>>Username;
    cout<<"Enter your password :";
    cin>>Password;
    cout<<"Registration successful"<<endl;
    menu();
  }
 int main(){
    system("cls");
     int option;
     menu();
     do{
     cin>>option;
     system("cls");
     switch(option){
        case 1: logo(); 
              break;
        case 2: Register();
              break;
        case 0: cout<<"Exit "<<endl;
         default: cout<<"Invalid option "<<endl;
                  menu(); cin>>option;
                  break;
        
     }
     }while(option != 0);
     
    
    return 0;
 }