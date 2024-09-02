#include <iostream>

using namespace std;

 int main(){
    system("cls");
    int numberStuent;
    cout << "How the number of students: ";
    cin>>numberStuent;
    string names[numberStuent];
    int avrages[numberStuent];
    for(int i = 0; i<numberStuent ; i++){
         cout<<"Enter your studnet :"<<i+1<<": ";
         cin>>names[i];
         cout<<"Enter your average :"<<i+1<<": ";
         cin>>avrages[i];
    }for(int i = 0; i<numberStuent ;i++){
         cout<<"Student :"<<names[i]<<endl;
         cout<<"avrage :"<<avrages[i]<<endl;
         cout<<"================="<<endl;
    }
    
    return 0;
 }
 