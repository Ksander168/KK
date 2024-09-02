#include <iostream>

using namespace std;
/*1. Fonction Prototype*/    
  void printGreeting();
  void smartGreeting(string name , int pin );
  float getBalnace();
  float calculateTax(float salary);
  
//   int main(){
// /*3. Call fonction */
//     system("cls");
//     // printGreeting();
//     // smartGreeting("korn");
//     // string name ="sila";
//     // smartGreeting(name);
//      string name; int pin;
//     cout<<"Enter your name :";
//     getline(cin,name);
//     cout<<"Enter your pin :";
//     cin>>pin;
//     smartGreeting(name,pin);
//     return 0;
//   }
    int main(){
        system("cls");
     float salary =getBalnace();
     float paidTax = calculateTax(salary);
     cout<<"Your salry is :"<<salary<<endl;
     cout<<"Your have to pay tax :"<<paidTax<<endl;
        
        return 0;
    }
 float calculateTax(float salary){
    float tax = 0.2;
    return salary*tax;
  }
  float getBalnace(){
    return 100.0+50.5;
  }
  void printGreeting(){
    // cout<<"hell world"<<endl;
  }
  void smartGreeting(string name , int pin ){
 
   if( pin == 1234){
     cout<<"Hello "<<name<<" from cambodia"<<endl;
   }else{
     cout<<"You "<<name<<" not allow from cambodia"<<endl;
   }
  }