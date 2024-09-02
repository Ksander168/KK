#include <iostream>

using namespace std;
 //salary >= 500 && salary < 1000 , tax 10*%
 //salary >= 1000 && salary < 2000 , tax 20*%
 //salary >= 2000  , tax 30*%
 int main()
 {
    system("cls");
    float salary  = 600;
    
    if(salary <500){
        cout<<"tax 0%"<<endl;
        cout<<"paid tax : $"<<salary*0<<endl;
    }
    else if(salary >= 500 && salary <1000){
        cout<<"tax 10%"<<endl;
        cout<<"paid tax : $"<<salary*0.1<<endl;
    }
    else if(salary >= 1000 && salary <2000){
        cout<<"tax 20%"<<endl;
        cout<<"paid tax : $"<<salary*0.2<<endl;
    }
    else{
        cout<<"tax 30%"<<endl;
        cout<<"paid tax : $"<<salary*0.3<<endl;
    }
    
    /* code */
    return 0;
 }
 