#include <iostream>
 using namespace std;
  void sorryMessage(){
    cout<<"sorry "<<endl;
  }
  int sumSeries( int n){
    int sum = 0;
    for(int i = 0; i<=10; i++){
        sum += i;
    }
    return sum;
  }
 int main(){
    system("cls");
     cout<<sumSeries(100);
    return 0;
 }