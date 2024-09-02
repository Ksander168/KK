#include <iostream>

using namespace std;

  int main(){
    system("cls");
    //declaring an array
     float marks [5];
     marks [0] = 90.5;
     marks [1] = 80.5;
     marks [2] = 90.5;
     marks [3] = 90.5;
     marks [4] = 90.5;
    //Assinging value to array
     string names[5] = {"jonh" , "hello " , "sum" , "kboy", "flower"};
     //accesing array else elment
     cout<<"name :"<<names[2]<<endl;
     cout<<"mark :"<<marks[2]<<endl;
      cout<<"==============\n";
     //print all element
     for(int i = 0 ; i<5 ; i++){
         cout<<"name :"<<names[i]<<endl;
         cout<<"mark :"<<marks[i]<<endl;
         cout<<"==============\n";
     }
    return 0;
  }