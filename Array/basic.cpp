#include <iostream>

using namespace std;

  int main(){
    system("cls");
    //declaring an array
     float marks [5];
     marks [0] = 90.5;
     marks [1] = 80.5;
     marks [2] = 99.5;
     marks [3] = 70.5;
     marks [4] = 80.5;
      cout<<"size of marks :"<<sizeof(marks)<<endl;
      cout<<"address of marks :"<<&marks<<endl;
      cout<<"address of marks[0] :"<<&marks[0]<<endl;
      cout<<"address of marks[1] :"<<&marks[1]<<endl;
      cout<<"address of marks[2] :"<<&marks[2]<<endl;
      cout<<"address of marks[3] :"<<&marks[3]<<endl;
      cout<<"address of marks[4] :"<<&marks[4]<<endl;
      cout<<"2n element is :"<<*(marks+2)<<endl;
    return 0;
    
  }