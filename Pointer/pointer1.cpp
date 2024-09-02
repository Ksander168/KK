#include <iostream>

 using namespace std;
 
    int main(){
        // int a = 2;
        // int * ptr = &a;
        // cout<<"A address :"<< ptr<<endl;
        // cout<<"Pointer of a :"<<*ptr<<endl;
        // cout<<"The value after modified"<<endl;
        // *ptr = 10;
        // cout<<"A : "<<a<<endl;
        // cout<<"Pointer of a :"<<*ptr<<endl;
        int a = 2;
        double b = 10;
        void *p = &b;
        double *ptr = static_cast<double*>(p);
        cout<<"A : "<< *ptr<<endl;
        
        return 0;
    }